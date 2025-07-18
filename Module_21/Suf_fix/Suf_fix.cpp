/*it'd just like the prefix just summing it from back*/
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
void suf_fix(vector<int> &vec)
{
    int n = vec.size(), i = n - 2;
    while (i >= 0)
    {
        vec[i] += vec[i + 1];
        i--;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The entered vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    suf_fix(vec);
    cout << "\nThe suffix sum of the given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    return 0;
}