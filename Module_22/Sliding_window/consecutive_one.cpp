#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>
using namespace std;

string suffix(int i)
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
int max_cons(vector<int> vec, int k)
{
    int n = vec.size(), flips = 0, i = 0, j = 0, len, maxLen = INT_MIN;
    while (j < n)
    {
        if (flips < k && vec[j] == 0)
            flips++;
        else if (vec[j] == 0)
        {
            len = j - i;
            maxLen = max(maxLen, len);
            while (vec[i] == 1)
                i++;
            i++;
        }
        j++;
    }
    len = j - i;
    maxLen = max(maxLen, len);
    return maxLen;
}
int main()
{
    int n, k;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements if the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Enter the number of flips : ";
    cin >> k;
    cout << "The length of subarray with maximum consecutive one is : " << max_cons(vec, k);
    return 0;
}