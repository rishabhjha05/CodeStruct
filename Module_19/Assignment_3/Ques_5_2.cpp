/*Q5. Check if the given array is almost sorted. (elements are at-most one position away).*/
#include <iostream>
#include <algorithm>
using namespace std;
string sufix(int i)
{
    if (i == 0)
        return "st";
    else if (i == 1)
        return "nd";
    else if (i == 2)
        return "rd";
    else
        return "th";
}

bool check(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    for (int j = 0; j < n - 1; j++)
        if (arr[j] <= arr[j + 1])
            continue;
        else
            return false;
    return true;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of the array  \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " element of the array :";
        cin >> arr[i];
    }
    if (check(arr, n))
        cout << "Yes the array is almost sorted.";
    else
        cout << "No the array is not almost sorted.";
    return 0;
}