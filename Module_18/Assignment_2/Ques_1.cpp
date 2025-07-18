/*Q1: Write a program to apply binary search in array sorted in decreasing order.*/
#include <iostream>
using namespace std;
int search(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int n, target;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "Enter the target element : ";
    cin >> target;
    cout << "The target element found on index " << search(arr, n, target);
    return 0;
}