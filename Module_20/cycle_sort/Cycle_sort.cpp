/*when operation to be done on elements given from 0 to n or 1 to n*/
#include <iostream>
#include <vector>
using namespace std;

string sufix(int i)
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

void quick_sort(vector<int> &vec)
{
    int n = vec.size(), i = 0;
    while (i < n)
    {
        int correct_idx = vec[i] - 1;
        if (vec[correct_idx] == vec[i])
            i++;
        else
            swap(vec[correct_idx], vec[i]);
    }
}
int main()
{
    int n;
    cout << "Enter thr size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Entre the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Entre the " << i + 1 << sufix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";

    quick_sort(vec);
    cout << "\nThe sorted vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    return 0;
}