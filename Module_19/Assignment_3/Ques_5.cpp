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
    int carr[n];
    for (int i = 0; i < n; i++)
        carr[i] = arr[i];
    sort(carr, carr + n);
    if (arr[0] != carr[0] && arr[0] != carr[1])
        return false;
    for (int j = 1; j < n - 1; j++)
    {
        if (arr[j] != carr[j - 1] && arr[j] != carr[j] && arr[j] != carr[j + 1])
            return false;
        else
            continue;
    }
    if (arr[n - 1] != carr[n - 1] && arr[n - 1] != carr[n - 2])
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