/*Q1. Print all the elements of an array in reverse order.*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print(int arr[], int idx)
{
    if (idx == -1)
        return;
    cout << arr[idx];
    print(arr, idx - 1);
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "The given array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i];
    cout << endl;
    cout << "The reverse of given array is : ";
    print(arr, n - 1);
    return 0;
}