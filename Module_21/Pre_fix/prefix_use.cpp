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
int pre(vector<int> vec, int idx)
{
    int n = vec.size(), i = 1;
    while (i < n)
    {
        vec[i] += vec[i - 1];
        i++;
    }
    if (idx < 0)
        return 0;
    return vec[idx];
}
int main()
{
    int n, si, ei;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Enter the starting index : ";
    cin >> si;
    cout << "Enter the ending index : ";
    cin >> ei;
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe sum of the elements from " << si << " to " << ei << " is : " << pre(vec, ei) - pre(vec, si - 1);

    return 0;
    ;
}