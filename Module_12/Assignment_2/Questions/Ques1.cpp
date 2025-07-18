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
    int n, target, idx = -1;
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
    for (int j = vec.size() - 1; j >= 0; j--)
    {
        if (vec[j] == target)
        {
            idx = j;
            break;
        }
    }
    if (idx != -1)
        cout << "The last occurance of the target value " << target << " is at the index : " << idx;
    else
        cout << "The target value is not found in the given vector.";
    return 0;
}