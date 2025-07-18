/*given a mountain array which first increase then decrease
find the peak element which is the largest in the given array
if there is no peak element return -1*/
#include <iostream>
using namespace std;
int find_peak(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            return mid;
        else if (arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // hence no peak index exist
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
    cout << "The peak index for the given array is : " << find_peak(arr, n);
    return 0;
}