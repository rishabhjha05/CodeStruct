/*store and print all the subsets of the given array */
#include <iostream>
#include <vector>
using namespace std;
void helper(vector<int> nums,vector<vector<int>> &sol,vector<int> ans,int idx)
{
    if(idx==nums.size())
    {
        sol.push_back(ans);
        return;
    }
    helper(nums,sol,ans,idx+1);
    ans.push_back(nums[idx]);
    helper(nums,sol,ans,idx+1);

}
vector<vector<int>> subsets(vector<int>nums)
{
    vector<vector<int>> sol;
    vector<int> vec;
    helper(nums,sol,vec,0);
    return sol;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
  
    vector<int> vec(n);
    cout << "Enter all the element of the array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> vec[i];
    }
    vector<vector<int>> sol=subsets(vec);
    return 0;
}