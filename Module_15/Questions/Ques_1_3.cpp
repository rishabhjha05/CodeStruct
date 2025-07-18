/*Best method without extra space */
#include <iostream>
#include <vector>
using namespace std;
int duplicate(int arr[], int n)
{
    int ideal_sum = (n - 1) * (n) / 2, sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum-ideal_sum;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> arr[i];
    }
    cout << "The duplicate element in the given array is : " << duplicate(arr, n);
    return 0;
}
/* 
Time complexity is O(n);
space complexity is O(1);
*/