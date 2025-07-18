#include <iostream>
using namespace std;
#define pi 3.141592653589793238462643
int main()
{
    int radius, height;
    cout << "Enter the radius and height of the cylinder respectively : ";
    cin >> radius >> height;
    cout << "The voulume of given cylinder is : " << pi * radius * radius * height;

    return 0;
}