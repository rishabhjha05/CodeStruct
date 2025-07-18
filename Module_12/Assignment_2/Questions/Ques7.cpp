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
    int i = 0, j = vec.size() - 1;
    while (i < j)
    {
        if (vec[i] > 0 && vec[j] < 0)
        {
            int temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;

            i++;
            j--;
        }
        else if (vec[i] < 0 && vec[j] > 0)
        {
            i++;
            j--;
        }
        else if (vec[i] < 0)
            i++;
        else if (vec[j] > 0)
            j--;
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