#include <iostream>
#include <vector>
using namespace std;

int count = 0;
void inversion(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
            if (vec[i] > vec[j])
                count++;
    }
}
int main()
{

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the array \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element of the array : ";
        cin >> vec[i];
    }

    inversion(vec);
    cout << "Total number of the inversion possible is : " << count;
    return 0;
}