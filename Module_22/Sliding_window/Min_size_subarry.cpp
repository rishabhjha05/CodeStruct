/*Given a array of size n and you are given with a value of k
you have to return the minimum size of the subarray whose element
sum is greater than the given value k*/
#include <iostream>
#include <vector>
#include <limits.h>

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
int min_size(vector<int> vec, int k)
{
    int n = vec.size(), i = 0, j = 0, sum = 0, len = INT_MAX, min_len = INT_MAX;
    while (j < n)
    {
        sum += vec[j];
        while (sum >= k)
        {
            len = j - i + 1;
            min_len = min(min_len, len);
            sum -= vec[i];
            i++;
        }
        j++;
    }
    if (min_len == INT_MAX)
        return 0;
    return min_len;
}
int main()
{
    int n, k;
    cout << "Entre the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "The minimum size of the subarray suming equal to or greater than k is : " << min_size(vec, k);
}