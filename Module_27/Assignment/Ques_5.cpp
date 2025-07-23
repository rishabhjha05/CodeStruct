/*
Predict the out put /find error

#include<iostream>
class book{
string name;
string author;
int callno;
void display(){
cout <name <” “ <author <” ” <callno <endl;
}
};
int main(){
book b1 = {"Let us C","YPK",101};
b1.display();
return 0;
}

->standard namespace is missing
->constructor is missing
->The insertion operator << is used incorrectly in the display function.
->data members are not ptrivate

corrected version written below
*/

#include <iostream>
using namespace std; // was missing
class book
{
private:
    string name;
    string author;
    int callno;

public:
    book(string n, string a, int c) : name(n), author(a), callno(c) {} // was missing
    void display()
    {
        cout << name << " " << author << " " << callno << endl; // insertion operator was wrong
    }
};
int main()
{
    book b1 = {"Let us C", "YPK", 101};
    b1.display();
    return 0;
}
