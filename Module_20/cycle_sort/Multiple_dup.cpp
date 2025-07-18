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
    int n = vec.size(), i = 0;
    while (i < n)
    {
        int correct_idx = abs(vec[i]) - 1;
        if (vec[correct_idx] < 0)
            ans.push_back(abs(vec[i]));
        else
            vec[correct_idx] = -vec[correct_idx];
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