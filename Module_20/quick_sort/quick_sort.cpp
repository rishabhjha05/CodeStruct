#include <iostream>
#include <vector>
using namespace std;
void quick_sort(vector<int> &vec, int st, int end)
{
    if (st >= end)
        return;
    int i = st + 1, j = end, pivotidx = -1, count = 0;
    while (i <= end)
        if (vec[i++] <= vec[st])
            count++;

    pivotidx = count + st;
    swap(vec[pivotidx], vec[st]);

    i = st;
    while (i < pivotidx && j > pivotidx)
    {
        if (vec[pivotidx] >= vec[i])
            i++;
        if (vec[pivotidx] < vec[j])
            j--;
        if (vec[pivotidx] < vec[i] && vec[pivotidx] >= vec[j])
            swap(vec[i], vec[j]);
    }
    quick_sort(vec, st, pivotidx - 1);
    quick_sort(vec, pivotidx + 1, end);
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Entre the elements of the array \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> vec[i];
    }
    quick_sort(vec, 0, n - 1);
    cout << "The sorted array is : ";
    for (int ele : vec)
        cout << ele << " ";
    return 0;
}