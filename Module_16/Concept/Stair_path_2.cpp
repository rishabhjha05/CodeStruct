/*write a function to find total number of ways to reach end of the given stair
where a guy can only take 1 , 2 or 3  step forward at a time*/
#include <iostream>
using namespace std;
int stair(int n)
{
    if (n == 3)
        return 3;
    else if (n == 2)
        return 2;
    else if (n == 1)
        return 1;
    return stair(n - 3) + stair(n - 2) + stair(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number of steps : ";
    cin >> n;
    cout << "Total number of possible ways to reach end of the stair is : " << stair(n);

    return 0;
}