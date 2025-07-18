#include <iostream>
#include <limits.h>
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
    int n, max = INT_MIN, i = 0;
    size(&n);
    int arr[n], max_arr[3] = {0, 0, 0};
    input_array(arr, n);
    while (i < 3)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                if (max < arr[j])
                    max = arr[j];
            }
            else
            {
                if (max < arr[j] && max_arr[i - 1] > arr[j])
                    max = arr[j];
            }
        }
        if (max != INT_MIN)
            max_arr[i] = max;
        max = INT_MIN;
        i++;
    }
    cout << "The top 3 largest unique elements are: ";
    for (int k = 0; k < 3; k++)
        cout << max_arr[k] << ",";

    return 0;
}