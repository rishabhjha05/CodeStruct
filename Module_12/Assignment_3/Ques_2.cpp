#include <iostream>
#include <vector>
using namespace std;
void multiply(vector<int> &result, int j)
{
    int carry = 0, n = result.size();
    for (int i = 0; i < n; i++)
    {
        int product = result[i] * j + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    while (carry)
    {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

vector<int> factorial(int n)
{
    vector<int> result(1, 1);
    for (int i = 2; i <= n; i++)
    {
        multiply(result, i);
    }
    return result;
}
void print_factorial(int n)
{
    vector<int> result = factorial(n);
    int m = result.size();
    for (int i = m - 1; i >= 0; i--)
    {
        cout << result[i];
    }
}
int main()
{
    int n;
    cout << "Enter the number you want factorial of : ";
    cin >> n;
    cout << "The factorial of given number is : ";
    print_factorial(n);
    return 0;
}
// int main()
// {
//     int n;
//     cout << "Enter the number you want factorial of : ";
//     cin >> n;
//     long long fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     cout << "The factorial of given number is : " << fact;

//     return 0;
// }