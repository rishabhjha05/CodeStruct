/*given a sorted rotated array and a target value search for the target value
in the array*/
#include <iostream>
using namespace std;
int find_pivot(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
            return mid;
        else if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 1;
}
int search(int arr[], int n, int target, int pivot)
{
    int low, high;
    if (target <= arr[pivot - 1] && target >= arr[0])
        low = 0, high = pivot - 1;
    else
        low = pivot, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
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
    int pivot = find_pivot(arr, n);

    cout << "The target element found on index " << search(arr, n, target, pivot);

    return 0;
}