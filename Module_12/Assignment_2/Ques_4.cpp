#include <iostream>
using namespace std;
string sufix(int i)
{
    if (i == 0)
        return "st";
    if (i == 1)
        return "nd";
    if (i == 2)
        return "rd";
    else
        return "th";
}
float difference(float arr[], int n)
{
    float sum_even = 0, sum_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum_even += arr[i];
        else
            sum_odd += arr[i];
    }
    return sum_even - sum_odd;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " element : ";
        cin >> arr[i];
    }
    cout << "The required differnece is : " << difference(arr, n);
    return 0;
}