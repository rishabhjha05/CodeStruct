/*
4.Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of two
numbers formed from digits of the array. Please note that all digits of the given array must be used to form
the two numbers.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int sum)
{
    int rev = 0;
    while (sum > 0)
    {
        rev *= 10;
        rev += sum % 10;
        sum = sum / 10;
    }
    return rev;
}
int add_string(string num1, string num2)
{
    int sum = 0, i = num1.size() - 1, j = num2.size() - 1, carry = 0;
    while (i >= 0 || j >= 0)
    {
        if (i < 0)
        {
            int b = num2[j] - '0';
            sum *= 10;
            sum += (b + carry) % 10;
            carry = (b + carry) / 10;
            j--;
        }
        else if (j < 0)
        {
            int a = num1[i] - '0';
            sum *= 10;
            sum += (a + carry) % 10;
            carry = (a + carry) / 10;
            i--;
        }
        else
        {
            int a = num1[i] - '0', b = num2[j] - '0';
            sum *= 10;
            sum += (a + b + carry) % 10;
            carry = (a + b + carry) / 10;
            i--, j--;
        }
    }
    if (carry != 0)
    {
        sum *= 10;
        sum += carry;
    }
    sum = reverse(sum);
    return sum;
}
int min_sum(int arr[], int n)
{
    string num1, num2;
    int i = 0;
    while (i < n)
    {
        if (i % 2 == 0)
        {
            if (arr[i] == 0 && num1.size() == 0)
            {
                i++;
                continue;
            }
            else
                num1.push_back('0' + arr[i]);
        }
        else
        {
            if (arr[i] == 0 && num2.size() == 0)
            {
                i++;
                continue;
            }
            else
                num2.push_back('0' + arr[i]);
        }
        i++;
    }
    return add_string(num1, num2);
}
int main()
{
    int n, minsum;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element of the array : ";
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    cout << "The possible minimum sum is : " << min_sum(arr, n);
    return 0;
}