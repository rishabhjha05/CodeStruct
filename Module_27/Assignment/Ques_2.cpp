/*Ques 2 : Create a class to specify data on students with these attributes:
Roll number, Name, Department, Course, Year of joining. Create
2 class variables. Now, create a member function to check if two
students have the same Department.s*/
#include <iostream>
using namespace std;
class student
{
private:
    string name, Department, course, roll_no;
    int year_of_join;

public:
    student(string name, string rn, string dept, string course, int yofj)
    {
        student::name = name;
        roll_no = rn;
        Department = dept;
        this->course = course;
        year_of_join = yofj;
    }
    friend bool check(student &std1, student &std2);
};
bool check(student &std1, student &std2)
{
    return (std1.Department == std2.Department);
}
int main()
{
    student std1("rishabh", "012UC3231", "BTech", "CSE", 2024), std2("aryan", "012UC3251", "MTech", "ECE", 2024);
    if (check(std1, std2))
        cout << "Yes, both the student have same department.";
    else
        cout << "No, they don't have same departent.";
    return 0;
}