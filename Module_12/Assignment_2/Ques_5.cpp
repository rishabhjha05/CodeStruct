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
void operation(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            arr[i] *= 2;
        else
            arr[i] += 10;
    }
}
int main()
{
    int n;
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
        cout << arr[i] << ",";
    operation(arr, n);
    cout << "\nThe required array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ",";

    return 0;
}