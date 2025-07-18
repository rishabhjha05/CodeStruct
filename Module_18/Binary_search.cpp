/*given a array and a target value return index of the element if found else return -1*/
#include <iostream>
using namespace std;
int find(int arr[], int low, int high, int target)
{
    if (low > high)
        return -1;
    else
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            return find(arr, mid + 1, high, target);
        else
            return find(arr, low, mid - 1, target);
    }
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
    cout << "The index on which terget element is found is : " << find(arr, 0, n - 1, target);
    return 0;
}