/*you are given with a vector and you have to give a range of value of k
for which |k-vec[i]| gives a sorted vector where i is from 0 to vec.size()-1 */
#include <bits/stdc++.h>
using namespace std;
float kmin = FLT_MIN, kmax = FLT_MAX;
void range(vector<int> &vec)
{
    int i = 1;
    while (i < vec.size())
    {
        int x = vec[i - 1] - vec[i];
        if (kmin > kmax)
        {
            kmin = 1, kmax = -1;
            break;
        }
        else if (x > 0)
            kmin = max(kmin, (float)(vec[i] + vec[i - 1]) / 2);
        else if (x < 0)
            kmax = min(kmax, (float)(vec[i] + vec[i - 1]) / 2);
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
        cout << "Enter the " << i + 1 << "th element of the vector : ";
        cin >> vec[i];
    }
    range(vec);
    kmin = (int)kmin + 1, kmax = (int)kmax;
    if (kmin == kmax)
        cout << "There is only oone value of k possible : " << kmin;
    else if (kmin < kmax)
        cout << "The range of k is [ " << kmin << " , " << kmax << "]";
    else
        cout << "No value of k possible.";
    return 0;
}