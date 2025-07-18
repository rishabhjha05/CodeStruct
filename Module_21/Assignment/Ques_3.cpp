/*Q3. We define the conversion array conver of an array arr as follows:
conver[i] = arr[i] + max(arr[0..i]) where max(arr[0..i]) is the maximum value of arr[j]
over 0 <= j <= i. We also define the score of an array arr as the sum of the values of the
conversion array of arr. Given a 0-indexed integer array nums of length n , return an array
ans of length n where ans[i] is the score of the prefix nums[0..i] . [Leetcode 2640]

Example 1:
Input: nums = [2,3,7,5,10]
Output: [4,10,24,36,56]
*/
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

vector<long long> vec_score(vector<int> &vec)
{
    int n = vec.size(), i = 0, max = INT_MIN;
    vector<long long> score(n);
    while (i < n)
    {
        if (max < vec[i])
            max = vec[i];
        score[i] = vec[i] + max;
        i++;
    }
    i = 1;
    while (i < n)
    {
        score[i] += score[i - 1];
        i++;
    }
    return score;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    vector<long long> score(n);
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    score = vec_score(vec);
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe score vector will be : ";
    for (int ele : score)
        cout << ele << " ";
    return 0;
}