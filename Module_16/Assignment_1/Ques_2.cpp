/*Q2. Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
steps at each level.*/
#include <iostream>
using namespace std;
int stair(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 4;
    return stair(n - 1) + stair(n - 2) + stair(n - 3);
}
int main()
{
    int n;
    cout << "Enter the number of steps : ";
    cin >> n;
    cout << "The number of ways to climb given number of stairs is : " << stair(n);
    return 0;
}