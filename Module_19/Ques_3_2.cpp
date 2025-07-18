#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void rearange(vector<int> &vec)
{
    int n = vec.size(), x = 0;
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX, mindex = -1;
        for (int j = 0; j < n; j++)
            if (vec[j] > 0 && min > vec[j])
            {
                min = vec[j];
                mindex = j;
            }
        vec[mindex] = x--;
    }
}
int main()
{

    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    cout << "The entered vector is : ";
    for (int ele : vec)
        cout << ele << " ";

    cout << endl;
    rearange(vec);
    cout << "The rearanged vector is : ";
    for (int ele : vec)
        cout << -1 * ele << " ";

    return 0;
    return 0;
}