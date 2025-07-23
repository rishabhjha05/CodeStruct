#include <iostream>
using namespace std;
const void func()
{
    cout << "This is a constant function which do not change any variable.";
}
int main()
{
    const int variable = 4;
    // a const keyword used for a variable could be of any type int float etc
    // which do not need to be changed and it can not be changed
    func();
    //just keep one thing in mind that a constant variable need to be intialized whenever we declare them
    return 0;
}