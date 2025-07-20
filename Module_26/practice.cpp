#include <iostream>
#include <vector>
#include <limits>
#include <string>
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
class cricketer
{
private:
    string name;
    int age;
    int numTestMatch;
    float average;

public:
    void setName(string name)
    {
        cricketer::name = name;
    }
    void setAge(int age)
    {
        cricketer::age = age;
    }
    void setnumTestMatch(int numTestMatch)
    {
        this->numTestMatch = numTestMatch;
    }
    void setAverage(float average)
    {
        this->average = average;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    int getnumTestMatch()
    {
        return numTestMatch;
    }
    float getAverage()
    {
        return average;
    }
};
int main()
{
    int n;
    vector<cricketer> detail;
    cout << "Enter number of player : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int age, numTestMatch;
        float average;
        cout << "\nEnter " << i + 1 << suffix(i + 1) << " player's name : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, name);
        cout << "Enter his age : ";
        cin >> age;
        cout << "Enter number of test match he played : ";
        cin >> numTestMatch;
        cout << "Enter his average score : ";
        cin >> average;
        cricketer *Cricketer = new cricketer;
        Cricketer->setName(name);
        Cricketer->setAge(age);
        Cricketer->setnumTestMatch(numTestMatch);
        Cricketer->setAverage(average);
        detail.push_back(*Cricketer);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\n       " << i + 1 << suffix(i + 1) << "PLAYER\n";
        cout << "Player name : " << detail[i].getName();
        cout << "\nPlayer age : " << detail[i].getAge();
        cout << "\nNumber of matches he played : " << detail[i].getnumTestMatch();
        cout << "\nHis average score : " << detail[i].getAverage();
    }

    return 0;
}