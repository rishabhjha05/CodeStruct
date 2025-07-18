#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    float marks;
    cin >> marks;
    (marks >= 33) ? cout << "passed" : cout << "failed" << endl;
    cout << abs(marks);
    return 0;
}