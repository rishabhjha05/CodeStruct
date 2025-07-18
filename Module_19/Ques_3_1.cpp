/*given a vector replace the all the elemetn from number 0 to n-1 accordingly to there size*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rearange(vector<int> &vec)
{
    int n = vec.size();
    vector<int> vec2(n);
    for (int i = 0; i < n; i++)
        vec2[i] = vec[i];
    sort(vec2.begin(), vec2.end());
    for (int i = 0; i < n; i++)
    {
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (vec2[mid] == vec[i])
            {
                vec[i] = mid;
                break;
            }
            else if (vec2[mid] < vec[i])
                low = mid + 1;
            else
                high = mid - 1;
        }
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
        cout << ele << " ";

    return 0;
}