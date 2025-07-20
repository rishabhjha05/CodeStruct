#include <iostream>
using namespace std;
void print()
{
    int a = 1;
    static int b = 1;
    cout << a << "  " << b << "\n";
    a++, b++;
}

class student
{
private:
    string name;
    static int age;

public:
    void setName(string name)
    {
        student::name = name;
    }
    static void setAge()
    {
        age += 4;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
int student::age = 20;
int main()
{
    int i = 0, n;
    cout << "Enter the value of n : ";
    cin >> n;
    while (i++ < n)
        print();
    /*see in the result how (a) reinitializes
    it self on each call but b does not
    same thing goes for object if any data member in a class
    is declared as static you can't change it own way in another object
    it tottaly belong to the class in which declared*/

    student std1, std2;
    std1.setName("Rishabh Jha");
    std2.setName("Shubham Jha");
    cout << "Student name : " << std1.getName();
    cout << "\nStudent age : " << std1.getAge();
    cout << "\nStudent name : " << std2.getName();
    std2.setAge();
    cout << "\nStudent age : " << std2.getAge();
    return 0;
}