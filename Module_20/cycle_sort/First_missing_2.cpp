/*leetcode 41*/
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
int first_missing(vector<int> &vec)
{
    int i = 0, n = vec.size(), max = 0;
    while (i < n)
    {
        if (max < vec[i])
            max = vec[i];
        i++;
    }
    i = 0;
    vector<bool> found(max, false);
    while (i < n)
    {
        if (vec[i] > 0)
            found[vec[i] - 1] = true;
        i++;
    }
    i = 0;
    while (i < max)
    {
        if (!found[i])
            return i + 1;
        i++;
    }
    return i + 1;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe frist missing elements in the given vector is : " << first_missing(vec);
    return 0;
}