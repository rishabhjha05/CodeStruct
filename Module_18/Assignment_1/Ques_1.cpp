/*Q1. Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
does not exist return -1.*/
#include <iostream>
using namespace std;
int last_occurr(int arr[], int n, int target)
{
    int low = 0, high = n - 1, last_ocurr = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            last_ocurr = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return last_ocurr;
}
int main()
{
    int n, target;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "Enter the target element : ";
    cin >> target;
    cout << "The last ocuurance of the given element in the array is at : " << last_occurr(arr, n, target);

    return 0;
}