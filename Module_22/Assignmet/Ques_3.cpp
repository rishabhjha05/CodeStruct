/*[Leetcode 1248]*/
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

int func(vector<int> vec, int k)
{
    int n = vec.size(), i = 0, j = 0, sum = 0, res = 0;
    while (j < n)
    {
        sum += vec[j];
        while (sum > k)
            sum -= vec[i++];
        res += j - i + 1;
        j++;
    }
    return res;
}
int numOfniceSubarrays(vector<int> nums, int k)
{
    int n = nums.size(), i = 0;
    while (i < n)
    {
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
        i++;
    }

    return func(nums, k) - func(nums, k - 1);
}
int main()
{
    int n, k;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements of the vector : ";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Enter the value of k : ";
    cin >> k;

    cout << "" << numOfniceSubarrays(vec, k);
    return 0;
}