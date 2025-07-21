/*multiple inheritance is the type of inheritace in which a base class inherits more than one parent class*/
#include <iostream>
using namespace std;
class a
{
public:
    int var1;
};
class b
{
public:
    int var2;
};
class c : public a, public b // this is the function which inherits more than one parent class
{
public:
    int var3;
};
int main()
{
    return 0;
}