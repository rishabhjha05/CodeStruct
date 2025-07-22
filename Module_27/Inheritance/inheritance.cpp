#include <iostream>
using namespace std;
class vehicles
{
public:
    string name;
    string model;
    string price;
    string engine_power;
    int launch_year;
    int noWheel;
};
class car : public vehicles
{
public:
    int noAirbag; // different data member from the parent class not common in car and bike
};
class bike : public vehicles
{
public:
    bool toolBox; // different data member from the parent class not common in car and bike
};
int main()
{
    car car1;
    bike bike1;
    car1.name = "Mercedez";
    car1.model = "Benz CLA 200";
    car1.engine_power = "220 HP";
    car1.launch_year = 2020;
    car1.noWheel = 5;
    car1.price = "32 Lakh rupees";
    bike1.name = "Hero Honda";
    bike1.model = "splendor 20k8";
    bike1.engine_power = "8000 rpm";
    bike1.launch_year = 2010;
    bike1.noWheel = 2;
    bike1.price = "65 thousand rupees";
    cout << "\n        Car\n";
    cout << "Brand name : " << car1.name;
    cout << "\nModel : " << car1.model;
    cout << "\nEngine Power : " << car1.engine_power;
    cout << "\nLaunch Year : " << car1.launch_year;
    cout << "\nNumber of wheel : " << car1.noWheel;
    cout << "\nBase price : " << car1.price;
    cout << "\n        Bike\n";
    cout << "Brand name : " << bike1.name;
    cout << "\nModel : " << bike1.model;
    cout << "\nEngine Power : " << bike1.engine_power;
    cout << "\nLaunch Year : " << bike1.launch_year;
    cout << "\nNumber of wheel : " << bike1.noWheel;
    cout << "\nBase price : " << bike1.price;

    return 0;
}