/*abstract class is of two type a simple abstract class with one or more
pure virtual function and some of the non virtual function too
but in a pure abstract class there are olny pure virtual function
and no ordinary function

a pure virtual function is a function which is only mentioned in the
parent class and described or overrided in the derived class
and it's compulsory to override the pure virtual function in the derived class
*/
#include <iostream>
using namespace std;
class abstractClass
{
private:
    int a;

public:
    virtual float calculate() = 0; // it's an pure virtual function
};
class add : public abstractClass
{
public:
    float a = 1.3, b = 4.2;
    float calculate() { return this->a + this->b; }
};
class subtract : public abstractClass
{
    float a = 2.8, b = 6.3;
    float calculate() { return this->a - this->b; }
};
class multiply : public abstractClass
{
    float a = 2.5, b = 9.1;
    float calculate() { return this->a * this->b; }
};
int main()
{
    add sum;
    cout << sum.calculate();
    return 0;
}