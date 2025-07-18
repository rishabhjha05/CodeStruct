/*Given an sorted array and a target value find its first occurance in the given array*/
#include <iostream>
using namespace std;
int find(int arr[], int n, int target)
{
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}
int main()
{
    int n, target;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter all the element of the sorted array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "Enter the target value : ";
    cin >> target;
    cout << "The given array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "The first ocuurance of the given target element is at : " << find(arr, n, target);
    return 0;
}
