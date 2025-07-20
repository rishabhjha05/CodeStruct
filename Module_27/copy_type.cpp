/*There are two type of copy shallow copy and deep copy
of object
in shallow copy two objects are dependent on each other
and in deep copy they are independent of each other
*/
#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    void setName(string name)
    {
        student::name = name;
    }
    void setAge(int age)
    {
        student::age = age;
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
int main()
{
    student std1, std2;
    std1.setName("Rishabh Jha");
    std1.setAge(20);
    std2 = std1; // here copy constructor is called and it is shallow copy
    cout << "Name before : " << std2.getName();
    cout << "\nAge before : " << std2.getAge();
    std1.setAge(18); // this will change the age in both object std 1 and std2 hence shallow copy
    cout << "\nName after : " << std2.getName();
    cout << "\nAge after : " << std2.getAge();
    return 0;
}