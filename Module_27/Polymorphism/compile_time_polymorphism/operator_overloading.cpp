#include <iostream>
using namespace std;
class cpxNum
{
private:
    float real;
    float imaginary;

public:
    /*
    cpxNum add(cpxNum c2)
    {
        cpxNum c3;
        c3.real = this->real + c2.real;
        c3.imaginary = this->real + c2.real;
        return c3;
    }
    */
    cpxNum operator+(cpxNum &c2)
    {
        cpxNum c3;
        c3.real = this->real + c2.real;
        c3.imaginary = this->imaginary + c2.imaginary;
        return c3;
    }
    float getReal()
    {
        return real;
    }
    float getImaginary()
    {
        return imaginary;
    }
    void setReal(float real)
    {
        cpxNum::real = real;
    }
    void setImaginary(float imaginary)
    {
        cpxNum::imaginary = imaginary;
    }
};

int main()
{
    cpxNum c1, c2;
    c1.setReal(4.1);
    c1.setImaginary(2.9);
    c2.setReal(2);
    c2.setImaginary(3.5);
    cpxNum c3 = c1 + c2;
    cout << "Real : " << c3.getReal() << "    Imaginary : " << c3.getImaginary();
    return 0;
}