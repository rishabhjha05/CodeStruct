#include <iostream>
#include <limits.h>
using namespace std;
void swap(int arr[], int i, int min_idx)
{
    int temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;
}
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int min = INT_MAX, min_idx = -1;

    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[j] < min)
    //         {
    //             min = arr[j];
    //             min_idx = j;
    //         }
    //     }
    //     swap(arr, i, min_idx);
    // }
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element of the array : ";
        cin >> arr[i];
    }
    sort(arr, n);
    for (int ele : arr)
        cout << ele << " ";
    return 0;
}