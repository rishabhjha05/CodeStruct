#include <iostream>
#include <string.h>
#include <limits.h>

using namespace std;
int main()
{
    int n, min = INT_MAX;
    char ch[3];
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        (i == 0) ? strcpy(ch, "st") : (i == 1) ? strcpy(ch, "nd")
                                  : (i == 2)   ? strcpy(ch, "rd")
                                               : strcpy(ch, "th");
        cout << "Enter the " << i + 1 << ch << " element : ";
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (min > arr[j])
            min = arr[j];
    }
    cout << "The minimum value in given array is : " << min;
    return 0;
}