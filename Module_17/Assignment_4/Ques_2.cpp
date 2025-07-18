/*Q2. Given an integer array which may contain duplicate numbers, return power set, containing all the
subsets of the set. [Leetcode 90]*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> sol;
void power_set(vector<int> ans, int arr[], int n, int idx, bool flag)
{
    if (idx == n)
    {
        sol.push_back(ans);
        return;
    }
    int num = arr[idx], num_next = arr[idx + 1];
    if (num == num_next)
    {
        power_set(ans, arr, n, idx + 1, false);
        if (flag == true)
        {
            ans.push_back(num);
            power_set(ans, arr, n, idx + 1, true);
        }
    }
    else
    {
        power_set(ans, arr, n, idx + 1, true);
        if (flag == true)
        {
            ans.push_back(num);
            power_set(ans, arr, n, idx + 1, true);
        }
    }
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
    sort(arr, arr + n);

    power_set({}, arr, n, 0, true);
    for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }
    return 0;
}