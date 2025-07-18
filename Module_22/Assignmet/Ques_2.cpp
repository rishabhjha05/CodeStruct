/*Q2. The score of an array is defined as the product of its sum and its length.
For example, the score of [1, 2, 3, 4, 5] is (1 + 2 + 3 + 4 + 5) * 5 = 75 .
Given a positive integer array nums and an integer k , return the number of non-empty
subarrays of nums whose score is strictly less than k.
A subarray is a contiguous sequence of elements within an array. [Leetcode 2302]
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
int numOfsubarray(vector<int> &vec, int k)
{
    long long n = vec.size(), i = 0, j = 0, sum = 0, count = 0;
    while (j < n)
    {
        sum += vec[j];
        int score = sum * (j - i + 1);
        while (i <= j && score >= k)
            sum -= vec[i++];
        count += j - i + 1;
        j++;
    }
    return count;
}
int main()
{
    int n, k;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "enter the size of the subarray : ";
    cin >> k;
    return 0;
}