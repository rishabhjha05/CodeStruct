/*Q1. Create a class ‘date’ that contains three members namely date,month and year. Create 2 objects of this
class with different dates and now compare the two. If the dates are equal then display the message as
"Equal" otherwise "Unequal". Use Getters & Setters.
*Note : The function should be a member function of this class.*/
#include <iostream>
using namespace std;

class Date
{
private:
    int date, month, year;

public:
    // Date(int date, int month, int year) : date(date), month(month), year(year);
    void setDate(int date)
    {
        Date::date = date;
    }
    void setMonth(int month)
    {
        Date::month = month;
    }
    void setYear(int year)
    {
        Date::year = year;
    }
    bool check(Date &dt2)
    {
        if (this->date == dt2.date)
        {
            if (this->month == dt2.month)
                if (this->year == dt2.year)
                    return true;
        }
        return false;
    }
};
int main()
{
    Date dt1, dt2; // you cal use constructor to intiate values at once instead of getter and setter

    // Date dt1(xx,yy,zz),dt2(xx,yy,zz);
    dt1.setDate(02);
    dt1.setMonth(06);
    dt1.setYear(2005);
    dt2.setDate(2);
    dt2.setMonth(4);
    dt2.setYear(2020);
    if (dt1.check(dt2))
        cout << "Given two dates are same.";
    else
        cout << "Given two dates are not same.";
    return 0;
}