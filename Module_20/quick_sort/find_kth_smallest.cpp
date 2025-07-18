#include <iostream>
#include <vector>
using namespace std;
int sol, k;
int partition(vector<int> &vec, int si, int endi)
{
    int pivotelement = vec[(si + endi) / 2], count = 0, i = si, j;
    while (i < vec.size())
    {
        if (pivotelement >= vec[i] && (si + endi) / 2 != i)
            count++;
        i++;
    }
    swap(vec[(si + endi) / 2], vec[si + count]);
    i = si, j = endi;
    int pivotidx = count + si;
    while (i < pivotidx && j > pivotidx)
    {
        if (vec[i] < pivotelement)
            i++;
        if (vec[j] > pivotelement)
            j--;
        if (vec[i] > pivotelement && vec[j] < pivotelement)
        {
            swap(vec[i], vec[j]);
        }
    }
    return pivotidx;
}
void quick_select(vector<int> &vec, int start_idx, int end_idx)
{
    if (start_idx >= end_idx)
        return;
    int pivot = partition(vec, start_idx, end_idx);
    if (pivot == k - 1)
    {
        sol = pivot;
        return;
    }
    else if (pivot < k - 1)
        quick_select(vec, pivot + 1, end_idx);
    else
        quick_select(vec, start_idx, pivot - 1);
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the array \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> vec[i];
    }
    cout << "Enter the value of k : ";
    cin >> k;
    quick_select(vec, 0, n - 1);
    cout << "The kth smallest value on the given array is : " << vec[sol];
    return 0;
}