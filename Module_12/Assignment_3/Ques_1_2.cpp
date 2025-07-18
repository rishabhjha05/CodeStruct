#include <iostream>
#include <algorithm>
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
int triplet(int arr[], int n, int target)
{
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] == target)
            {
                count++;
                j++;
                k--;
            }
            else if (arr[i] + arr[j] + arr[k] > target)
                k--;
            else
                j++;
        }
    }

    return count;
}

int main()
{
    int n, target;
    cout << "Enter the siez of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " element : ";
        cin >> arr[i];
    }
    cout << "Enter the target element : ";
    cin >> target;
    cout << triplet(arr, n, target) << " triplet found in the given array suming to given target";
    return 0;
}