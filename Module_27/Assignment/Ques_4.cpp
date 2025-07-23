#include <iostream>
#include <vector>
#include <limits>
#include <math.h>
using namespace std;

string suffix(int n)
{
    switch (n % 10)
    {
    case 1:
        return "st";
    case 2:
        return "nd";
    case 3:
        return "rd";
    default:
        return "th";
    }
}
class Employee
{
private:
    string name, employee_id;
    double salary;

public:
    Employee(string name, string empId, double salary)
    {
        Employee::name = name;
        employee_id = empId;
        this->salary = salary;
    }
    string getName()
    {
        return name;
    }
    string getEmployeeId()
    {
        return employee_id;
    }
    double getSalary()
    {
        return salary;
    }
    void display()
    {
        cout << "Employee name : " << this->name;
        cout << "\nEmployee id : " << this->employee_id;
        cout << "\nEmployee salary : " << this->salary;
    }
};
double averageWage(vector<Employee> ep)
{
    double n = ep.size(), totalWage = 0;

    for (int i = 0; i < n; i++)
        totalWage += ep[i].getSalary();
    return totalWage / n;
}
double maxWage(vector<Employee> ep)
{
    double n = ep.size(), maxWage = __DBL_MIN__;
    for (int i = 0; i < n; i++)
        maxWage = max(maxWage, ep[i].getSalary());
    return maxWage;
}
int main()
{
    vector<Employee> emp;
    int n;
    cout << "Enter number of employee : ";
    cin >> n;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < n; i++)
    {
        string name, empId;
        double salary;
        cout << "Enter name of " << i + 1 << suffix(i + 1) << " Employee : ";
        getline(cin, name);
        cout << "Enter his employee id : ";
        getline(cin, empId);
        cout << "Enter his salary : ";
        cin >> salary;
        Employee ep(name, empId, salary);
        emp.push_back(ep);
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n       " << i + 1 << suffix(i + 1) << " EMPLOYEE\n";
        emp[i].display();
    }
    cout << "\n\nAverage wage is of : " << averageWage(emp);
    cout << "\nMax wage is of : " << maxWage(emp);
    return 0;
}