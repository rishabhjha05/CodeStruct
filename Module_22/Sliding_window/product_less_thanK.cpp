#include <iostream>
#include <vector>
#include <limits.h>
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
int lessThanK(vector<int> &vec, int k)
{
    if (k <= 1)
        return 0;
    int n = vec.size(), product = 1, i = 0, j = 0, res = 0;
    while (j < n)
    {
        if (product < k)
            product *= vec[j];
        while (product >= k && i < n)
        {
            res += j - i;
            product /= vec[i];
            i++;
        }
        j++;
    }
    while (i < n)
        res += j - (i++);
    return res;
}

int main()
{
    int n, k;
    cout << "Enter the size of thre vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "The number of consecutive subarray os product less than " << k << " is : " << lessThanK(vec, k);
    return 0;
}