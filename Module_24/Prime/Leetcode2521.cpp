#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;

string suffix(int n)
{
    switch (n % 10)
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

int distinctPrimeFactor(vector<int> vec)
{
    int n = vec.size(), mx = INT_MIN, i = 0, count = 0;
    while (i < n)
        mx = max(mx, vec[i++]);
    vector<bool> seive(mx + 1, true);
    seive[0] = false, seive[1] = false;
    i = 2;
    while (i <= sqrt(mx))
    {
        if (seive[i])
        {
            for (int j = i * i; j <= mx; j += i)
                seive[j] = false;
        }
        i++;
    }
    i = 0;
    while (i <= mx)
    {
        if (seive[i++])
        {
            int j = 0;
            bool found = false;
            while (j < n)
            {
                if (vec[j] % i == 0)
                {
                    found = true;
                    break;
                }
                j++;
            }
            if (found)
                count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "enter all the elements of the vector\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The number of prime factor of product of given vector is : " << distinctPrimeFactor(vec);
    return 0;
}