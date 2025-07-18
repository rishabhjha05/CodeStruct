/*store and return all the subset of the string containing duplicate element*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void helper(vector<int> ans, vector<int> nums, int idx, vector<vector<int>> &sol, bool flag)
{
    if (idx == nums.size())
    {
        sol.push_back(ans);
        return;
    }
    int num = nums[idx], num_next = nums[idx + 1];

    if (num == num_next)
    {
        helper(ans, nums, idx + 1, sol, false);
        if (flag == true)
        {
            ans.push_back(nums[idx]);
            helper(ans, nums, idx + 1, sol, true);
        }
    }
    else
    {
        helper(ans, nums, idx + 1, sol, true);
        if (flag == true)
        {
            ans.push_back(nums[idx]);
            helper(ans, nums, idx + 1, sol, true);
        }
    }
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> sol;
    vector<int> vec;
    sort(nums.begin(), nums.end());
    helper(vec, nums, 0, sol, true);
    return sol;
}
int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the element of the vector : \n";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<vector<int>> sol = subsetsWithDup(nums);
    for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j];
        cout << endl;
    }
}