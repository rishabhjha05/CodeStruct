#include <iostream>
#include <algorithm>
using namespace std;
int frequency(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n / 2];
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "The element having frequency greater than n/2 is : " << frequency(arr, n);

    return 0;
}