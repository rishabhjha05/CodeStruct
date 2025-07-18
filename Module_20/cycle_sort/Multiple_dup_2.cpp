/*leetcode 442*/
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
vector<int> multi_dup(vector<int> &vec)
{
    vector<int> ans;
    sort(vec.begin(), vec.end());
    int i = 0;
    while (i < vec.size() - 1)
    {
        if (vec[i] == vec[i + 1])
        {
            ans.push_back(vec[i]);
            i += 2;
        }
        else
            i++;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
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
    cout << "\nThe duplicate element in the given vector is : ";
    dup = multi_dup(vec);
    for (int ele : dup)
        cout << ele << " ";
    return 0;
}