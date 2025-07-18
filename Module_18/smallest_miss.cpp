/*Given a sorted array find the smallest missing integer*/
#include <iostream>
using namespace std;
/*
this method find that smallest missing number linearly
int find(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] != i)
            return i;
    return -1;
}
*/
int find(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "Smallest missing integer in the given array is : " << find(arr, n);
    return 0;
}