/*leetcode 442*/
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

vector<int> multi_dup(vector<int> &vec)
{
    vector<int> ans;
    int i = 0;
    while (i < vec.size())
    {
        int correct_idx = vec[i] - 1;
        if (vec[i] == 0)
            i++;
        else if (vec[correct_idx] == vec[i] && correct_idx != i)
        {
            ans.push_back(vec[i]);
            vec[i] = 0;
        }
        else if (vec[i] != vec[correct_idx])
            swap(vec[i], vec[correct_idx]);
        else
            i++;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Entre the size of the vector : ";
    cin >> n;
    vector<int> vec(n), dup;
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    dup = multi_dup(vec);
    cout << "\nThe duplicate element in the given vector are : ";
    for (int ele : dup)
        cout << ele << " ";

    return 0;
}