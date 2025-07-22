#include <iostream>
using namespace std;
class a
{
public:
    int A;
    virtual void func()
    {
        cout << "Function in class a was this.";
    }
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
    a *ptr;
    b B;
    ptr = &B;
    ptr->func(); // calling a func from non virtual func will lead to unexpected use of func in class a
    return 0;
}