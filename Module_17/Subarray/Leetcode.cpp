/*Print all the sub array of given array only*/
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int mx = INT_MIN;
void generate(vector<int> ans, int arr[], int n, int idx, int sum)
{
    if (idx == n)
    {
        mx = max(sum, mx);
        return;
    }
    generate(ans, arr, n, idx + 1, sum);
    if (ans.size() == 0 || arr[idx - 1] == ans[ans.size() - 1])
    {
        ans.push_back(arr[idx]);
        generate(ans, arr, n, idx + 1, sum + arr[idx]);
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
    vector<int> vec;
    generate(vec, arr, n, 0, 0);
    return 0;
}