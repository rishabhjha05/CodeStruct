#include <iostream>
#include <vector>
#include <limits.h>
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
    long long salary;

public:
    Employee(string name, string empId, long long salary)
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
    long long getSalary()
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
double averageWage(vector<Employee> ep)
{
    maxWage = INT_MIN;

    for (int i = 0; i < n; i++)
        totalWage += ep[i].getSalary();
    return totalWage / n;
}

int main()
{
    vector<Employee> emp;
    int n;
    cout << "Enter number of employee : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name, empId;
        long long salary;
        cout << "Enter name of " << i + 1 << suffix(i + 1) << " Employee : ";
        getline(cin, name);
        cout << "Enter his employee id : ";
        getline(cin, empId);
        cout << "Enter his salary : ";
        cin >> salary;
        Employee ep(name, empId, salary);
        emp.push_back(ep);
    }

    return 0;
}