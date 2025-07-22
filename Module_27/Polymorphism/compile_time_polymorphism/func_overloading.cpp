#include <iostream>
using namespace std;
float area(float l, float b)
{
    return (l * b);
}
float area(float l)
{
    return l * l;
}
/* two function with same name cant be made untill there number of argument is different
if we try to just change the return type with same function name it will not work */

class student
{
private:
    int var1;
    float var2 = -1;

public:
    student(int a) : var1(a) {}
    student(int a, float b) : var1(a), var2(b) {}
    // this is the constructor over loading
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
    cout << area(2.4, 2) << "\n";
    cout << area(3);
    // in this way we can make function of same name but with diff no of argument
    student std1(1);
    cout << std1.getVar1() << " " << std1.getVar2() << "\n"; // ther will be the default value of var 2
    student std2(2, 3.4);
    cout << std2.getVar1() << " " << std2.getVar2();
    return 0;
}