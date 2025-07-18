/*you are given with a array sort it using selection sort method*/
#include <iostream>
#include <limits.h>
using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void sort(int arr[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        int j = i, min = INT_MAX, min_idx = -1;
        while (j < n)
        {
            if (min > arr[j])
            {
                min = arr[j];
                min_idx = j;
            }
            j++;
        }
        swap(arr, i, min_idx);
        i++;
    }
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
    cout << "The given array is : ";
    for (int element : arr)
        cout << element << " ";

    sort(arr, n);
    cout << "\nThe sorted array is : ";
    for (int element : arr)
        cout << element << " ";

    return 0;
}