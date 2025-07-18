/*you're given with a vector find it if it can be partitioned
into two subvector of equal sum */
#include <iostream>
#include <vector>
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
vector<int> pre(vector<int> vec)
{
    int i = 1, n = vec.size();
    while (i < n)
    {
        vec[i] += vec[i - 1];
        i++;
    }
    return vec;
}
int main()
{
    int n, idx = 0;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n), prefix, vec1, vec2;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    bool found = false;
    prefix = pre(vec);
    while (idx < n)
    {
        if (2 * prefix[idx] == prefix[n - 1])
        {
            cout << "\nThe given vector can be partioned just after " << idx << " index.";
            found = true;
            break;
        }
        idx++;
    }
    if (found)
    {
        int i = 0;
        while (i <= idx)
            vec1.push_back(vec[i++]);
        i++;
        idx++;
        while (idx < n)
            vec2.push_back(vec[idx++]);
        cout << "\nThe first subvector will be : ";
        for (int ele : vec1)
            cout << ele << " ";
        cout << "\nThe second subvector will be : ";
        for (int ele : vec2)
            cout << ele << " ";
    }
    else
        cout << "\nThe given vector can not be partitioned.";
    return 0;
}