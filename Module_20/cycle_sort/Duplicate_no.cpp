/*leetcode 287*/
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
int find_duplicate(vector<int> &vec)
{
    int n = vec.size(), i = 0;
    while (i < n)
    {
        int correct_idx = vec[i] - 1;
        if (correct_idx == i)
            i++;
        else if (vec[i] == vec[correct_idx])
            return vec[i];
        else
            swap(vec[correct_idx], vec[i]);
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