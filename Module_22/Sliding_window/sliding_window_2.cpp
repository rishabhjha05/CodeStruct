/*IN this we explored bruet force method of previous problem*/
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
    int n = vec.size(), i = 0, max_sum = INT_MIN;
    while (i <= n - k)
    {
        int sum = 0, j = i;
        while (j < i + k)
            sum += vec[j++];
        max_sum = max(max_sum, sum);
        i++;
    }
    return max_sum;
}
int main()
{
    int n, k;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all th elements of the vector \n";
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
    cout << "\nThe maximum sum of " << k << "size subarray is : " << max_sum(vec, k);
    return 0;
}