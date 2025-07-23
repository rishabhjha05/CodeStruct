/*a friend function is a function which can access the
private data member of a class too in which they are declared*/
#include <iostream>
using namespace std;
class student
{
private:
    string Mob = "+91 8505149869";
public:
    friend string getMob(student &a);
};
string getMob(student &a) { return a.Mob; }
int main()
{
    student std1;
    string mob;
    mob = getMob(std1);
    cout << "Student mob number : " << mob;
    return 0;
}