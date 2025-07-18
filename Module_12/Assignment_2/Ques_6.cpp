#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;
string sufix(int i)
{
    if (i == 0)
        return "st";
    if (i == 1)
        return "nd";
    if (i == 2)
        return "rd";
    else
        return "th";
}
int unique(int arr[], int n)
{
    int i = 0, x = INT_MIN;
    bool found = false;
    sort(arr, arr + n);
    while (i < n - 1)
    {
        if (arr[i] != arr[i + 1])
            if (i < n - 2 && arr[i + 1] != arr[i + 2])
            {
                x = arr[i + 1];
                found = true;
                break;
            }
        i++;
    }
    if (!found)
    {
        cout << "\nNo unique element found in the given array.";
        return x;
    }
    else
        return x;
}
int main()
{
    int n, x;
    cout << "Enter the size of the array you want : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " element : ";
        cin >> arr[i];
    }
    cout << "The given array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    x = unique(arr, n);
    if (x != INT_MIN)
        cout << "\nThe one unique element in the given array is : " << x;
    return 0;
}