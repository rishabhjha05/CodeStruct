/*leetcode 287*/
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
int find_duplicate(vector<int> &vec)
{
    sort(vec.begin(), vec.end());
    int i = 0, j = 1;
    while (j < vec.size())
    {
        if (vec[i] == vec[j])
            return vec[i];
        else
            i++, j++;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe duplicate number in the given vector is : " << find_duplicate(vec);
    return 0;
}