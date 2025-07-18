/*Q1. Given an integer array containing unique numbers, return power set, containing all the subsets of
the set. [Leetcode 78]*/
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> sol;
void power_set(vector<int> ans, int arr[], int n, int idx)
{
    if (idx == n)
    {
        sol.push_back(ans);
        return;
    }
    power_set(ans, arr, n, idx + 1);
    ans.push_back(arr[idx]);
    power_set(ans, arr, n, idx + 1);
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }

    power_set({}, arr, n, 0);
    for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }

    return 0;
}