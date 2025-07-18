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
bool palindrome(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the siez of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " element : ";
        cin >> arr[i];
    }
    if (!palindrome(arr, n))
        cout << "The given array is not a palindrome.";
    else
        cout << "The given array is a palindrome.";
    return 0;
}