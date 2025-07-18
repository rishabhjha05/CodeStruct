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
    int no0 = 0, no1 = 0, no2 = 0, n = vec.size();
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 0)
            no0++;
        else if (vec[i] == 1)
            no1++;
        else if (vec[i] == 2)
            no2++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < no0)
            vec[i] = 0;
        else if (i < (no0 + no1))
            vec[i] = 1;
        else
            vec[i] = 2;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the vector you want : ";
    cin >> n;
    vector<int> vec(n);
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