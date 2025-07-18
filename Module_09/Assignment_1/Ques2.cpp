#include <iostream>
using namespace std;
#define pi 3.14
float area(float r)
{
    return pi * r * r;
}
int main()
{
    float r;
    cout << "Enter the radius in meter : ";
    cin >> r;
    cout << "The area of circle for given radius is : " << area(r) << " m^2";

    return 0;
}