#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number of student : ";
    cin >> n;
    int arr[n];
    char ch[3];
    for (int i = 0; i < n; i++)
    {
        (i == 0) ? strcpy(ch, "st") : (i == 1) ? strcpy(ch, "nd")
                                  : (i == 2)   ? strcpy(ch, "rd")
                                               : strcpy(ch, "th");

        cout << "Enter the marks obtained by " << i + 1 << ch << " student : ";
        cin >> arr[i];
        if (arr[i] < 0 || arr[i] > 100)
        {
            i--;
            cout << "The mark entered is invalid re enter the marks : " << endl;
        }
    }

    for (int j = 0; j < n; j++)
        sum += arr[j];
    cout << "The sum of all the element in the given array is : " << sum;
    return 0;
}