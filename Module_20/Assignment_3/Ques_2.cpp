/*Q2. You have a set of integers s , which originally contains all the numbers from 1 to n .
Unfortunately, due to some error, one of the numbers in s got duplicated to another number in
the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of
an array. [Leetcode 645]*/
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
vector<int> findErrorNums(vector<int> &nums)
{
    int i = 0, n = nums.size();
    vector<int> ans;
    while (i < n)
    {
        int correct_idx = nums[i] - 1;
        if (nums[i] != nums[correct_idx])
            swap(nums[i], nums[correct_idx]);
        else
            i++;
    }
    i = 0;
    while (i < n)
    {
        if (nums[i] != i + 1)
        {
            ans.push_back(nums[i]);
            ans.push_back(i + 1);
            return ans;
        }
        i++;
    }
    return ans;
}
int main()
{

    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n), ans;
    cout << "Enter all the elements of the vector\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    ans = findErrorNums(vec);
    cout << "The duplicate and the missing element are respectively : ";
    for (int ele : ans)
        cout << ele << " ";
    return 0;
}

/*100 xepto
100 bat
100 bat
30
*/