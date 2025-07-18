/*Given a matrix having 0-1 only where each row is sorted in increasing order,
find the row with the maximum number of 1’s.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int no_of_1(vector<int> arr)
{
    if (arr[0] == 1)
        return arr.size();
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 0 && arr[mid + 1] == 1)
            return arr.size() - mid - 1;
        else if (arr[mid] == 0 && arr[mid + 1] == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}
int main()
{
    int n, m, k = 0, mx = -1, max_row = -1;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of column : ";
    cin >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    cout << "Enter the elements of the sorted array \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter the element at coordinate (" << i + 1 << "," << j + 1 << ") : ";
            cin >> arr[i][j];
        }
    }

    while (k < n)
    {
        int no_1 = no_of_1(arr[k]);
        if (no_1 > mx)
        {
            max_row = k;
            mx = no_1;
        }
        k++;
    }
    cout << "The " << max_row << "th have maximum no of 1's.";
    return 0;
}