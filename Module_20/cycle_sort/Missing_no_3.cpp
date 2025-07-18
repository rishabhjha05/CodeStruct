/*leetcode 268*/
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
int missing_no(vector<int> &vec)
{
    int n = vec.size(), i = 0;
    vector<bool> found(n + 1, false);
    while (i < n)
    {
        int correct_idx = vec[i];
        found[correct_idx] = true;
        i++;
    }
    i = 0;
    while (i <= n)
    {
        if (!found[i])
            return i;
        i++;
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
    cout << "\nThe missing number from the vector in range [0," << n << "] is : " << missing_no(vec);
    return 0;
}