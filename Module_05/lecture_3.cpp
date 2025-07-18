#include <bits/stdc++.h>
#define pi 3.141592653589793238462643
using namespace std;

int main()
{
    float radius, area;
    cout << "Enter the radius of circle in meter : ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "The area of circle with given radius is : " << area << "m^2";

    return 0;
}