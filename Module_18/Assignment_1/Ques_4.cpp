/*Q4. Given an array of integers nums containing n + 1 integers where each
integer is in the range [1, n] inclusive in sorted order. There is only one
repeated number in nums, return this repeated number.*/
#include <iostream>
#include <algorithm>
using namespace std;
int duplicate(int arr[], int n)
{
    sort(arr, arr + n);
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return arr[high];
}
int main()
{
    int n;
    cout << "Enter the array size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element of the array : ";
        cin >> arr[i];
    }
    cout << "The duplicate element in the given array is : " << duplicate(arr, n);
    return 0;
}
