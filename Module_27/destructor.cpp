/*same as constructor it is a function whic is called when
the scope of a object ends
*/
#include <iostream>
using namespace std;
class car
{
private:
    string name;
    string modle;
    int mfg;

public:
    car()
    {
        cout << "\nconstructor is called.\n";
    }
    ~car()
    {
        cout << "destructor is called.\n ";
    }
    void setName(string name)
    {
        car::name = name;
    }
    void setModle(string modle)
    {
        car::modle = modle;
    }
    void setMfg(int mfg)
    {
        car::mfg = mfg;
    }
    string getName()
    {
        return name;
    }
    string getModle()
    {
        return modle;
    }
    int getMfg()
    {
        return mfg;
    }
};
int main()
{
    car car1;
    /*the scope for the object car 1 is only in this block so out of this
    block */
    car1.setName("Mercedes");
    car1.setModle("Benz CLA 200");
    car1.setMfg(2020);

    cout << "Car Name : " << car1.getName();
    cout << "\nCar Modle : " << car1.getModle();
    cout << "\nCar Manufacturing year : " << car1.getMfg() << "\n";
    // as soon as this block of code ends destructor is called
    return 0;
}
