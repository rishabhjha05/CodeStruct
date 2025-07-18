/*Q4. Sort the array in descending order using Bubble Sort.*/
#include <iostream>
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
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
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
    cout << "The entered array is : ";
    for (int ele : arr)
        cout << ele << " ";
    bubble_sort(arr, n);
    cout << "\nThe sorted  array is : ";
    for (int ele : arr)
        cout << ele << " ";
    return 0;
}