#include <iostream>
#include <vector>
using namespace std;
string sufix(int i)
{
    if (i == 1)
        return "st";
    else if (i == 2)
        return "nd";
    else if (i == 3)
        return "rd";
    else
        return "th";
}
void sort(vector<int> &vec)
{
    int no0 = 0, no1 = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
            no0++;
        else
            no1++;
    }
    for (int i = 0; i < vec.size(); i++)
    {
        if (i < no0)
            vec[i] = 0;
        else
            vec[i] = 1;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the vector you want : ";
    cin >> n;
    vector<int> vec(n);
    cout << "NOTE : ALL THE ELEMENT OF THE VECTOR SHOULD EITHER CAN BE 0 OR CAN BE 1.\n";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " : ";
        cin >> vec[i];
    }
    sort(vec);
    cout << "The sorted vector is : ";
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";
    return 0;
}