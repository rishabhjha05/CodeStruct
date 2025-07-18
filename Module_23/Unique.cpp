#include <iostream>
#include <vector>
using namespace std;
string suffix(int n)
{
    switch (n % 10)
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
int unique(vector<int> vec)
{
    int n = vec.size(), i = 0, res = 0;
    while (i < n)
        res = res ^ vec[i++];
    return res;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the array : ";
        cin >> vec[i];
    }
    cout << "Only the single unique element in the given array is " << unique(vec);
    return 0;
}