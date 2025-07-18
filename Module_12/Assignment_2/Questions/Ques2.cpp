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
int main()
{
    int n, count = 0, target;
    cout << "Enter the size of the vector : ";
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " : ";
        cin >> vec[i];
    }
    cout << "Enter the target value : ";
    cin >> target;
    cout << "The duplet that sum up to the given target value " << target << " are at the indeces  : \n";
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == target)
            {
                cout << "(" << i << "," << j << ")" << endl;
                count++;
            }
        }
    }
    if (count == 0)
        cout << "No duplet found to have sum to the given target.";
    return 0;
}