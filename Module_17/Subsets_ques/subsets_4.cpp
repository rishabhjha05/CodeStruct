/*print all the sub set of the of given array*/
#include <iostream>
#include <vector>
using namespace std;
void subset(int arr[], int n, int idx, vector<int> ans)
{
    if (idx == n)
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i];
        cout << endl;
        return;
    }
    subset(arr, n, idx + 1, ans);
    ans.push_back(arr[idx]);
    subset(arr, n, idx + 1, ans);
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    vector<int> vec;
    cout << "Enter all the element of the array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    subset(arr, n, 0, vec);

    return 0;
}