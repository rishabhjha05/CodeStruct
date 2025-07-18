/*you can only delete one element from the given vector return the size of subarray
with maximum consecutive 1*/
#include <iostream>
#include <vector>
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
int max_size(vector<int> &vec)
{
    int n = vec.size(), i = 0, j = 0, dlt = 0, len, maxLen = INT_MIN;
    while (j < n)
    {
        if (vec[j] == 0 && dlt < 1)
            dlt++;
        else if (vec[j] == 0)
        {
            len = j - i - 1;
            maxLen = max(maxLen, len);
            while (vec[i] == 1)
                i++;
            i++;
        }
        j++;
    }
    len = j - i - 1;
    maxLen = max(maxLen, len);
    return maxLen;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The size of subarray with maximum number of consecutive one is : " << max_size(vec);
    return 0;
}