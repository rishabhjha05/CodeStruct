/*5.Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after replacing
each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted array. If no such integer
exists that satisfies the above condition then return -1.*/
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

float kmin = (float)INT_MIN, kmax = (float)INT_MAX;
void solution(vector<int> vec)
{
    int i = 1;
    while (i < vec.size())
    {

        if (kmax < kmin)
        {
            cout << "There is no possible value of k for which the given statement could be satisfied.";
            return;
        }
        else if (vec[i - 1] - vec[i] >= 0)
            kmin = max(kmin, (float)(vec[i - 1] + vec[i]) / 2);
        else
            kmax = min(kmax, (float)(vec[i - 1] + vec[i]) / 2);
        i++;
    }
    cout << "The vlues of k for which condition holds true exist in the range [" << (int)kmin << "," << (int)kmax << "]";
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element of the vector : ";
        cin >> vec[i];
    }
    solution(vec);

    return 0;
}