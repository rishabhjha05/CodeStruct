/*Print all the possible combination for given array whic sum up to
given target value */
#include <iostream>
#include <vector>
using namespace std;
void comb(vector<int> ans, int arr[], int n, int target, int idx)
{
    if (target < 0)
        return;
    else if (target == 0)
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i];
        cout << endl;
        return;
    }
    for (int i = idx; i < n; i++)
    {
        ans.push_back(arr[i]);
        comb(ans, arr, n, target - arr[i], i);
        ans.pop_back();
    }
}
int main()
{
    int n, target;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    cout << "Enter the target value : ";
    cin >> target;
    vector<int> vec;
    comb(vec, arr, n, target, 0);

    return 0;
}