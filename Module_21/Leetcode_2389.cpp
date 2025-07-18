#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string suffix(int i)
{
    switch (i % 10)
    {
    case 1:
        return "st";
    case 2:
        return "nd";
    case 3:
        return "rd";
    default:
        return "th";
    }
}

vector<int> answerQueries(vector<int> &vec, vector<int> &queries)
{
    sort(vec.begin(), vec.end());
    int i = 1, n = vec.size(), n2 = queries.size();
    vector<int> ans;
    while (i < n)
    {
        vec[i] += vec[i - 1];
        i++;
    }
    i = 0;
    while (i < n2)
    {
        int low = 0, high = n - 1, length = 0;
        while (low <= high)
        {
            int idx = (low + high) / 2;
            if (queries[i] == vec[idx])
            {
                length = idx + 1;
                break;
            }
            else if (queries[i] > vec[idx])
            {
                length = idx + 1;
                low = idx + 1;
            }
            else
                high = idx - 1;
        }
        ans.push_back(length);
        i++;
    }
    return ans;
}
int main()
{
    int n, n2;
    cout << "Enter the size of the vector : ";
    cin >> n;
    cout << "Enter the size of the queries vector : ";
    cin >> n2;
    vector<int> vec(n), queries(n2);
    cout << "Enter the vector elements \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }

    return 0;
}