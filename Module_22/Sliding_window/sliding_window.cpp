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

int max_sum(vector<int> &vec, int k)
{
    int n = vec.size(), i = 0, j = k, curr_sum = 0, max_sum = INT_MIN;
    while (i < k)
        curr_sum += vec[i++];
    i = 1;
    while (j < n)
    {
        max_sum = max(max_sum, curr_sum);
        curr_sum = curr_sum + vec[j] - vec[i - 1];
        i++, j++;
    }
    max_sum = max(max_sum, curr_sum);
    return max_sum;
}
int main()
{
    int n, k;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Enter the size of subarray : ";
    cin >> k;
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe max sum of k size subarray is : " << max_sum(vec, k);
    return 0;
}