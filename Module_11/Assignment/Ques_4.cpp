#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, target = 0, count = 0;
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
    cout << "Enter the target value : ";
    cin >> target;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == target)
            count++;
    }
    if (count >= 2)
        cout << "Yes, the duplicate for the given element is present in the given array.";
    else
        cout << "No,the duplicate for the given element is not present in the given array. ";
    return 0;
}