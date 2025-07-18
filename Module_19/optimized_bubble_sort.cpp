#include <iostream>
using namespace std;

void swap(int arr[], int a)
{
    int temp = arr[a];
    arr[a] = arr[a + 1];
    arr[a + 1] = temp;
}
void sort(int arr[], int n)
{
    while (n > 1)
    {
        int i = 0;
        bool sorted = true;
        while (i < n - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr, i);
                sorted = false;
            }
            i++;
        }
        if (sorted)
            break;
        n--;
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
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    sort(arr, n);
    cout << "\nThe sorted array of the given array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}