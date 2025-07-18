/*Brute Force*/
#include <iostream>
using namespace std;
int duplicate(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
                return arr[i];
    }
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
Time complexity for this brute force is : O(n^2);
Space complexity for this method is : O(1)
means compliation done on constant space 
time and space complexity always considered for worst case scenerio
*/