#include <iostream>
using namespace std;
class a
{
private: // this can only be accessed by the class itself can't be inherited
    int private_data_member_of_a;

protected: // this can be accessed by class itself and can be inherited can't be accessed outside the class
    int protected_data_member_of_a;

public: // this can be accessed from anywhere and can be inherited
    int public_data_member_of_a;
};
// class b will only inherit the protected and public data member of the class a and make it private for itself
class b : private a
{
    int b;
};
// class c will only inherit the protected and public data member of the class a and make it protected for itself
class c : protected a
{
    int c;
};
// class d will only inherit the protected and public data member of the class a and make it public for itself
class d : public a
{
    int d;
};
int main()
{
    a A;

    // A.private_data_member_of_a; both of these are in inaccessible as these are
    // A.protected_data_member_of_a; private or protected data member of class a
    A.public_data_member_of_a;

    b B;
    // B.protected_data_member_of_a; all of them are inaccessible from outside of the
    // B.public_data_member_of_a; class as those were declared private in class b
    // and private data member of a could not be inherited in b

    c C;
    // private data member of a could not be inherited in c
    // C.protected_data_member_of_a; all of them are inaccessible from outside of the
    // C.public_data_member_of_a; class as those were declared protected in class c these can be accessed by getter setter

    d D;
    // private data member of a could not be inherited in d
    // D.protected_data_member_of_a; can be accessed using getter setter
    D.public_data_member_of_a;
    return 0;
}