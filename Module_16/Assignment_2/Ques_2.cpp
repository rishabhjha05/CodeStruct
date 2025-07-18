/*Q2. Print index of a given element in an array. If not present, print -1.*/
#include <iostream>
using namespace std;
int find(int arr[], int idx, int target)
{
    if (idx == -1)
        return -1;
    if (arr[idx] == target)
        return idx;
    return find(arr, idx - 1, target);
}
int main()
{
    int n, target;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "Enter any target value :";
    cin >> target;
    cout << "The target  value found on the index : " << find(arr, n - 1, target);
    return 0;
}