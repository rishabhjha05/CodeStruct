/*Q2. Given a sorted binary array, efficiently count the total number of 1’s in it.*/
#include <iostream>
using namespace std;
int no_of_1(int arr[], int n)
{
    if (arr[0] == 1)
        return n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 0 && arr[mid + 1] == 1)
            return n - mid - 1;
        else if (arr[mid] == 0 && arr[mid + 1] == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the sorted array \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "Total no of 1s in the given array is : " << no_of_1(arr, n);

    return 0;
}