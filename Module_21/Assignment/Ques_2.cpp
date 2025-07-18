/*Q2. Given an array of integers nums , calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is
equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements
to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1 . [Leetcode 724]
Example 1:
Input: nums = [1,7,3,6,5,6]
Output: 3
*/
#include <iostream>
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
int pivot(vector<int> &vec)
{
    int n = vec.size(), i = 1, idx = -1;
    vector<int> pre_sum(n), suf_sum(n);
    pre_sum[0] = 0, suf_sum[n - 1] = 0;
    while (i < n)
    {
        pre_sum[i] = pre_sum[i - 1] + vec[i - 1];
        i++;
    }
    i = n - 2;
    while (i >= 0)
    {
        suf_sum[i] = suf_sum[i + 1] + vec[i + 1];
        i--;
    }
    i = 0;
    while (i < n)
    {
        if (pre_sum[i] == suf_sum[i])
        {
            idx = i;
            break;
        }
        i++;
    }
    return idx;
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
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe pivot index for the given vector is : " << pivot(vec);
    return 0;
}