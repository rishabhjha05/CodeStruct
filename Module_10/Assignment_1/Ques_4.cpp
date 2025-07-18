#include <iostream>
using namespace std;
int main()
{
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
    cout << a << " " << b;
    return 0;
}
/*
The output of the code will be
20 20
*/