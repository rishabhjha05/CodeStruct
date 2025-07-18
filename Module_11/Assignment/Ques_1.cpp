#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, product = 1;
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
        product *= arr[j];
    }
    cout << "The product of all the element in the given array is : " << product;

    return 0;
}