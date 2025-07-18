/*leetcode 448*/
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
vector<int> disappeare(vector<int> &vec)
{
    int i = 0, n = vec.size();
    vector<int> ans;
    while (i < n)
    {
        int correct_idx = vec[i] - 1;
        if (vec[i] != vec[correct_idx])
            swap(vec[i], vec[correct_idx]);
        else
            i++;
    }
    i = 0;
    while (i < n)
    {
        if (vec[i] != i + 1)
            ans.push_back(i + 1);
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n), disp;
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    disp = disappeare(vec);
    cout << "\nThe missing elements in the given array are : ";
    for (int ele : disp)
        cout << ele << " ";
    return 0;
}