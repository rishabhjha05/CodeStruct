/*Your task is to store and print the maximum value from a given array
using recursion*/
#include <iostream>
#include <limits.h>

using namespace std;
int maximum(int arr[], int n, int idx)
{
    if (idx == n)
        return INT_MIN;
    return max(arr[idx], maximum(arr, n, idx + 1));
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array :\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "The maximum valued element in the given array is : " << maximum(arr, n, 0);
    return 0;
}