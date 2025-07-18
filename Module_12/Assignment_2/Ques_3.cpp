#include <iostream>
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
bool sorted(int arr[], int n)
{
    n--;
    if (arr[0] > arr[1])
    {
        while (n > 0)
        {
            if (arr[n - 1] < arr[n])
                return false;
            n--;
        }
    }
    if (arr[0] < arr[1])
    {
        while (n > 0)
        {
            if (arr[n - 1] > arr[n])
                return false;
            n--;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " element : ";
        cin >> arr[i];
    }
    if (!sorted(arr, n))
        cout << "The given array is not sorted.";
    else if (arr[0] < arr[1])
        cout << "The given array is sorted in ascending order.";
    else
        cout << "The given array is sorted in decending order.";

    return 0;
}