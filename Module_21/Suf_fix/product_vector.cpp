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
    int i = 1, n = vec.size();
    vector<int> prep(n), sufp(n);
    prep[0] = 1, sufp[n - 1] = 1;
    while (i < n)
    {
        prep[i] = prep[i - 1] * vec[i - 1];
        i++;
    }
    i = n - 2;
    while (i >= 0)
    {
        sufp[i] = sufp[i + 1] * vec[i + 1];
        i--;
    }
    i = 0;
    while (i < n)
    {
        vec[i] = prep[i] * sufp[i];
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