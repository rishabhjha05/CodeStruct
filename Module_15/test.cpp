#include <iostream>
#include <vector>
using namespace std;
// int pow(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     if (b == 1)
//         return a;
//     a = a * pow(a, b - 1);
//     return a;
// }
int main()
{
    // int a, b;
    // cout << "Enter the value of a and b respectively : ";
    // cin >> a >> b;

    // cout << "The sum from 1 to given number is " << pow(a, b);
    vector<int> arr = {1, 2, 3, 4};
    cout << arr.size();
    arr.erase(arr.begin() + 2);
    cout << arr.size();
    return 0;
}