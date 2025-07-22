/*multiple level inheritance is type of inheritance in which a class is inherited which inherited another classes*/
#include <iostream>
using namespace std;
class a
{
private:
    int pivate_dm_of_a;

protected:
    int protected_dm_of_a;

public:
    int public_dm_of_a;
};
class b : public a // class b contains all of its data member and private and protected of class a and made it public
{
private:
    int pivate_dm_of_b;

protected:
    int protected_dm_of_b;

public:
    int public_dm_of_b;
};
class c : public b // class c contains all of it's data member and protected and public data member of b
{
private:
    int pivate_dm_of_c;

protected:
    int protected_dm_of_c;

public:
    int public_dm_of_c;
};
int main()
{
    a A;
    b B;
    c C;
    // now check accordingly which data member of hich class can be accesed from outside of the class;
    return 0;
}