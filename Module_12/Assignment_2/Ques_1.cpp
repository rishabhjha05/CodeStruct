#include <iostream>
using namespace std;
string sufix(int i)
{
    if (i == 1)
        return "st";
    else if (i == 2)
        return "nd";
    else if (i == 3)
        return "rd";
    else
        return "th";
}
void size(int *n)
{
    cout << "Enter the size of the array : ";
    cin >> *n;
}
void input_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " element of the array : ";
        cin >> arr[i];
    }
}
int main()
{
    int n, limit, count = 0;
    size(&n);
    int arr[n];
    input_array(arr, n);
    cout << "Enter the limiting element : ";
    cin >> limit;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > limit)
            count++;
    }
    cout << "Total number of the strictly element greater then limiting value in the given array is : " << count;

    return 0;
}