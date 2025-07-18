/*Your task is to print only the maximum value from a given array
using recursion*/
#include <iostream>
#include <limits.h>
using namespace std;
void maximum(int arr[], int n, int idx, int max)
{
    if (idx == n)
    {
        cout << "The maximum valued element in the given array is : " << max;
        return;
    }
    if (max < arr[idx])
        max = arr[idx];
    maximum(arr, n, ++idx, max);
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
    maximum(arr, n, 0, INT_MIN);
    return 0;
}