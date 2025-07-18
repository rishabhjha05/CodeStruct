/*Q2. Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.*/
#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int max = INT_MIN, max2 = INT_MIN, i = 0;
    string str;
    cout << "Enter any numeric string only : ";
    getline(cin, str);
    int n = str.size();
    while (i < n)
    {
        int x = (int)str[i];
        if (x < 48 || x > 57)
        {
            cout << "The entered string contains invalid arguements.";
            return 1;
        }
        if (max < x - 48)
        {
            max2 = max;
            max = x - 48;
        }
        else if (max2 < x - 48)
            max2 = x - 48;
        i++;
    }
    cout << "The second largest element in the given string is : " << max2;
    return 0;
}