/*you have given with a unsorted array sort it using insertion sorting */
#include <iostream>
using namespace std;

void swap(int arr[], int a)
{
    arr[a] = arr[a] + arr[a - 1];
    arr[a - 1] = arr[a] - arr[a - 1];
    arr[a] = arr[a] - arr[a - 1];
}
void sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr, j);
            j--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array \n";
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "The given array is : ";
    for (int ele : arr)
        cout << ele << " ";

    sort(arr, n);

    cout << "\nThe sorted array is : ";
    for (int ele : arr)
        cout << ele << " ";

    return 0;
}