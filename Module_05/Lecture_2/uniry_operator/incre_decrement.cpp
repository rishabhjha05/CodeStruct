#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10, y = 20;
    cout << x << endl;   // print x i.e 10
    cout << ++x << endl; // assign x=x+1 and print x i.e 11
    cout << x++ << endl; // print x i.e 11 and the assign x=x+1
    cout << y << endl;   // print y i.e 20
    cout << y-- << endl; // print y i.e 20 and assign y=y-1=19
    cout << --y;         // assign y =y-1=18 and print y i.e 18

    return 0;
}