#include <iostream>
using namespace std;
class a
{
public:
    int A;
    void func() { cout << "Function in class a was this."; }
};
class b : public a
{
public:
    int B;
    void func() { cout << "Function in class b changed to this."; }
    // here we overrided the existing func in class a to anything else
};
int main()
{
    b B;
    B.func(); // still we can access the prexisting function in class a by scope resolution operator
    cout << "\n";
    B.a::func();
    return 0;
}