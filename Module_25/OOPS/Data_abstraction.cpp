/*Access Modifier -> private public and protected*/
#include <iostream>
using namespace std;
class student
{
private:
    string Mob = "+91 8850693259";
    string Emain = "jharishabh@gmail.com";

public:
    string name;
    string roll_no;
};
int main()
{
    student student1;
    student1.name = "Rishabh Jha";
    student1.roll_no = "09UC202428";
    cout << "Student name : " << student1.name;
    cout << "\nStudent roll no : " << student1.roll_no;
    /*cout << "student contact" << student1.Mob; as Mob declared privately we
    can't access it manualy we have to use getter;*/

    return 0;
}