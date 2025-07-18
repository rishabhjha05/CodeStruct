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
int sizeSub(vector<int> &vec)
{
    int n = vec.size(), mx = INT_MIN, count = 1, i = 0;
    while (i < n)
    {
        if (vec[i] > mx)
            mx = vec[i], count = 1;
        else if (vec[i] == mx)
            count++;
        i++;
    }
    return count;
}
int sizeSub_2(vector<int> &vec)
{
    int n = vec.size(), mx = INT_MIN, mxLen = INT_MIN, i = 0, j = 0;
    while (i < n)
        mx = max(mx, vec[i++]);
    i = 0;
    while (j < n)
    {
        if (vec[j] == mx)
            j++;
        else
            i++, j++;
        mxLen = max(mxLen, j - i);
    }
    return mxLen;
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
    cout << "The length of largest subarray with maximum value of AND is : " << sizeSub(vec);
    return 0;
}