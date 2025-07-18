#include <iostream>
#include <vector>
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
void prefix(vector<int> &vec)
{
    int n = vec.size(), i = 1;
    while (i < n)
    {
        vec[i] += vec[i - 1];
        i++;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    prefix(vec);
    cout << "\nThe ruuning sum vector for the given vector will be : ";
    for (int ele : vec)
        cout << ele << " ";
    return 0;
}