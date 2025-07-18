/*Q3. Given an integer array and an integer k where k<=size of array, We need to return the kth
smallest element of the array.*/
#include <iostream>
using namespace std;
int sol(int arr[], int n, int k)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (arr[j] < arr[j - 1] && j > 0)
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    if (k > 0 && k <= n)
        return arr[k - 1];
    else
        return -1;
}
int main()
{
    int n, k;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "The " << k << "th smallest element of the array is : " << sol(arr, n, k);
    return 0;
}
