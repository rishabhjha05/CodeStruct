#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, target = 0, count = 0, x = 0;
    char ch[3];
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n], idx[n];
    for (int i = 0; i < n; i++)
    {
        (i == 0) ? strcpy(ch, "st") : (i == 1) ? strcpy(ch, "nd")
                                  : (i == 2)   ? strcpy(ch, "rd")
                                               : strcpy(ch, "th");
        cout << "Enter the " << i + 1 << ch << " element : ";
        cin >> arr[i];
    }
    cout << "Enter the target value to find in the given array : ";
    cin >> target;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == target)
        {
            count++;
            idx[x] = j;
            x++;
        }
    }
    if (count == 0)
        cout << "The entred target is not found in the given array : ";
    else
    {
        cout << "The entred target is found " << count << " times in the given array\n";
        cout << "At these indexes : ";
        for (int k = 0; k < x; k++)
            cout << idx[k] << " ";
    }
}