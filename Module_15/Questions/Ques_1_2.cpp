/*Using extra space */
#include <iostream>
#include <vector>
using namespace std;
int duplicate(int arr[], int n)
{
    vector<int> vec(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (vec[arr[i]] == 1)
            return arr[i];
        else
            vec[arr[i]] = 1;
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
In this method we declared a vector of size n hence we used extra space tough time complexity decreased
hence
Time complexity is : O(n); n iteration done
Space complexity is : O(n); n space declared

time comp = O(noumber of operation)
space comp = O(extra space used)
*/