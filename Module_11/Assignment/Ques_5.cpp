#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
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
    int smallest = 1, smallest_missing = 0;
    for (int j = 0; j < n; j++)
    {
        if (smallest == arr[j])
            smallest++;
        else
        {
            smallest_missing = smallest;
            break;
        }
    }
    cout << "The smallest missing element in the given array is : " << smallest_missing;
    return 0;
}