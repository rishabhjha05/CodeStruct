#include <iostream>
#include "utility.h"
using namespace std;
string suffix(int i)
{
    switch (i % 10)
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

void get_vec(vector<int> &vec)
{
    cout << "Enter the elements of the vector : ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
}