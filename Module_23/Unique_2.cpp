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
void unique(vector<int> vec)
{
    int n = vec.size(), res = 0, i = 0, k = 0, mask;
    while (i < n)
        res = res ^ vec[i++];
    mask = res;
    while ((mask & 1) != 1)
        k++, mask >>= 1;
    int val = 0;
    i = 0;
    while (i < n)
    {
        int num = vec[i];
        num >>= k;
        if (num & 1 == 1)
            val = val ^ vec[i];
        i++;
    }
    res = res ^ val;
    cout << val << " & " << res;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Following are the only two unique element in the given array : ";
    unique(vec);
    return 0;
}