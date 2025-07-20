/*whenever a class is made there is inbuilt default function
to initialize memory for the object made */
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
        cout << "constructor is called.";
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

    return 0;
}
