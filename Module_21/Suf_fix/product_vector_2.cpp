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
void product(vector<int> &vec)
{
    int n = vec.size(), i = 0, pro1 = 1, pro2 = 1, noz = 0;
    while (i < n)
    {
        pro1 *= vec[i];
        if (vec[i] != 0)
            pro2 *= vec[i];
        else
            noz++;
        i++;
    }
    if (noz > 1)
        pro2 = 0;
    i = 0;
    while (i < n)
    {
        if (vec[i] != 0)
            vec[i] = pro1 / vec[i];
        else
            vec[i] = pro2;
        i++;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe product vector of the given vector will be : ";
    product(vec);
    for (int ele : vec)
        cout << ele << " ";
    return 0;
}