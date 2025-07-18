#include <iostream>
using namespace std;
int main()
{
    float f;
    cin >> f;
    int i = (int)f;
    if (f < 0)
        i = i - 1;
    cout << f - i;
    return 0;
}