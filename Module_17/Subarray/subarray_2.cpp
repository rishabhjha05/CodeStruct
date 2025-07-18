/*Print all the sub array of given array only*/
#include <iostream>
#include <vector>
using namespace std;
void generate(vector<int> ans, int arr[], int n, int idx)
{
    if (idx == n)
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i];
        cout << endl;
        return;
    }
    generate(ans, arr, n, idx + 1);
    if (ans.size() == 0 || arr[idx - 1] == ans[ans.size() - 1])
    {
        ans.push_back(arr[idx]);
        generate(ans, arr, n, idx + 1);
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
    generate(vec, arr, n, 0);
    return 0;
}