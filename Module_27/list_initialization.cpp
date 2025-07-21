/*constructor are also used to initialize the value of
a object made */
#include <iostream>
using namespace std;
class class1
{
private:
    int var1;
    float var2;

public:
    class1(int a, float b) : var1(a), var2(b) {}
    int getVar1()
    {
        return var1;
    }
    float getVar2()
    {
        return var2;
    }
};
class class2
{
private:
    int var1;
    float var2;

public:
    class2(int var1, float var2)
    {
        class2::var1 = var1;
        class2::var2 = var2;
    }
    int getVar1()
    {
        return var1;
    }
    float getVar2()
    {
        return var2;
    }
};
int main()
{
    class1 object1(2, 3.4);
    class2 object2(4, 6.3);
    cout << "Object 1 is intialized with values\nvar1 : " << object1.getVar1() << "   var2 : " << object1.getVar2();
    cout << "\nObject 2 is intialized with values\nvar1 : " << object2.getVar1() << "   var2 : " << object2.getVar2();
    return 0;
}
/*there described described two way in which we can use constructor
to intiate the value of data member in a class*/