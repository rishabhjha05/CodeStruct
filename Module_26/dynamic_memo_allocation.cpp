#include <iostream>
using namespace std;
class student
{
private:
    string name;
    string roll_no;

public:
    void setName(string name)
    {
        student::name = name;
    }
    void setRoll_no(string roll_no)
    {
        student::roll_no = roll_no;
    }
    string getName()
    {
        return name;
    }
    string getRoll_no()
    {
        return roll_no;
    }
};
int main()
{
    student rishabh;
    // as soon as object is declared, memory is allocated to the object statically
    rishabh.setName("Rishabh Jha");
    rishabh.setRoll_no("09UC5602724");

    student *aryan = new student;
    // there we made a pointer which stores the address of a object and the memory is allocated dynamically
    student Aryan = *aryan;
    Aryan.setName("Aryan Rajput");
    aryan->setName("Aryan Rajput");
    (*aryan).setRoll_no("05UC5602724");
    /* another option to use (*aryan) which points to the address made at runtime
    aryan-> can be used insted of *aryan*/
    return 0;
}