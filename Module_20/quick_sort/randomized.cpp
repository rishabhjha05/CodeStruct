/*due to worst case complexity of the quick sort is O(n^2)
we randomize the pivot element to middle element of the array*/
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &vec, int si, int endi)
{

    int pivotelement = vec[(si + endi) / 2], count = 0, i = si, j = endi;
    while (i < vec.size())
    {
        if (i != (si + endi) / 2 && vec[i] <= pivotelement)
            count++;
        i++;
    }
    int pivotidx = count + si;
    swap(vec[(si + endi) / 2], vec[pivotidx]);

    i = si;
    while (i < pivotidx && j > pivotidx)
    {
        if (vec[i] < vec[pivotidx])
            i++;
        if (vec[j] > vec[pivotidx])
            j--;
        if (vec[i] > vec[pivotidx] && vec[j] < vec[pivotidx])
        {
            int temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
        }
    }
    return pivotidx;
}
void quick_sort(vector<int> &vec, int stidx, int endidx)
{
    if (stidx >= endidx)
        return;
    int pivot = partition(vec, stidx, endidx);
    quick_sort(vec, stidx, pivot - 1);
    quick_sort(vec, pivot + 1, endidx);
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
        cout << "Enter the " << i + 1 << "th element of the array : ";
        cin >> vec[i];
    }
    quick_sort(vec, 0, n - 1);
    cout << "The sorted array is : ";
    for (int ele : vec)
        cout << ele << " ";
    return 0;
}
