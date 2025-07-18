#include <iostream>
#include <vector>
using namespace std;

void print(int arr[], int idx, int n)
{
    if (idx == n)
        return;
    cout << arr[idx] << " ";
    print(arr, ++idx, n);
}
void print(vector<int> vec, int idx)
{
    if (idx == vec.size())
        return;
    cout << vec[idx] << " ";
    print(vec, ++idx);
}
int main()
{
    int n, idx = 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements : \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    print(arr, idx, n);
    cout << endl;
    vector<int> vector = {1, 1, 3, 4, 5, 7, 8};
    print(vector, 0);
    return 0;
}