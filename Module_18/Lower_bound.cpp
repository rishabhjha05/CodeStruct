/*Given an sorted array and a target value find the lower bound 
the target value which is just smaller than the element and
\is present in the array */
#include <iostream>
using namespace std;
int find(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid - 1;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return high;
}
int main()
{
    int n, target;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter all the elements of the array : \n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element ";
        cin >> arr[i];
    }
    cout << "Enter the target value : ";
    cin >> target;
    cout << "The lower bound for the given target value is : " << arr[find(arr, n, target)];
    return 0;
}