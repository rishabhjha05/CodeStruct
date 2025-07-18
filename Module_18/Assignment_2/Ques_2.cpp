/*Q2: You have a sorted array of infinite numbers, how would
you search an element in the array?*/
#include <iostream>
using namespace std;
int find_target(int arr[], int low, int high, int target)
{
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
    return -1;
}
int find(int arr[], int target)
{
    int low = 0, high = 1;
    while (arr[high] < target)
    {
        low = high;
        high *= 2;
    }
    return find_target(arr, low, high, target);
}
int main()
{
    int n, target;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "Enter the target element : ";
    cin >> target;
    cout << "The target element found on index : " << find(arr, target);
    return 0;
}