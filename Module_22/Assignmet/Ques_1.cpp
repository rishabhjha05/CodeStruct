/*Q1. Given an array of integers arr and two integers k and threshold , return the number of sub-
arrays of size k and average greater than or equal to threshold . [Leetcode 1343]*/
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
int numOfSubarrays(vector<int> &vec, int k, int threshold)
{
    int count = 0, n = vec.size(), i = 1, j = 0, sum = 0;
    while (j < k)
        sum += vec[j++];
    if (sum / k >= threshold)
        count++;
    while (j < n)
    {
        sum = sum + vec[j] - vec[i - 1];
        if (sum / k >= threshold)
            count++;
        i++, j++;
    }
    return count;
}

int main()
{
    int n, k, threshold;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements of the vector : ";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Enter the size of subarray : ";
    cin >> k;
    cout << "Enter the threshold value : ";
    cin >> threshold;
    cout << "The number of " << k << " sized subarray with average greater than or equal to threshold is : " << numOfSubarrays(vec, k, threshold);
    return 0;
}