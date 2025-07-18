#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string Mob;
    string Email;

public:
    string name;
    string roll_no;
    // setter
    void setMob(string mob)
    {
        Mob = mob;
    }
    void setEmail(string email)
    {
        Email = email;
    }

    // getter
    string getMob()
    {
        return Mob;
    }
    string getEmail()
    {
        return Email;
    }
};

int main()
{
    string name, roll_no, mob, email;
    student student1;

    cout << "Enter your name : ";
    getline(cin, name);
    student1.name = name;

    cout << "Enter your roll number : ";
    getline(cin, roll_no);
    student1.roll_no = roll_no;

    cout << "Enter your mobile number : ";
    getline(cin, mob);
    student1.setMob(mob);

    cout << "Enter your email address : ";
    getline(cin, email);
    student1.setEmail(email);

    cout << "STUDENT INFORMATION\n";
    cout << "Student name : " << student1.name << "\nStudent roll number : " << student1.roll_no;
    cout << "\nStudent mobile number : " << student1.getMob() << "\nStudent email address : " << student1.getEmail();

    return 0;
}