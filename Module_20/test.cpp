#include <iostream>
#include <vector>
using namespace std;

string sufix(int i)
{
    switch (i % 10)
    {
    case 1:
        return "st";
    case 2:
        return "nd";
    case 3:
        return "rd";
    default:
        return "th";
    }
}
int pivot(vector<int> &vec, int si, int ei)
{
    int count = -1;
    for (int i = si; i <= ei; i++)
        if (vec[i] <= vec[(si + ei) / 2])
            count++;
    return count;
}
int kthsmallest(vector<int> &vec, int si, int ei, int k)
{
    int pivot_idx = si + pivot(vec, si, ei), i = si, j = ei;
    swap(vec[(si + ei) / 2], vec[pivot_idx]);
    if (pivot_idx == k)
        return vec[pivot_idx];
    while (i < pivot_idx && j > pivot_idx)
    {
        if (vec[i] > vec[pivot_idx] && vec[j] <= vec[pivot_idx])
            swap(vec[i], vec[j]);
        else if (vec[i] > vec[pivot_idx])
            j--;
        else
            i++;
    }
    if (pivot_idx > k)
        return kthsmallest(vec, si, pivot_idx - 1, k);
    else
        return kthsmallest(vec, pivot_idx + 1, ei, k);
}
int main()
{
    int n, k;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Enter the value of k : \n";
    cin >> k;
    cout << "The entered vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe " << k << sufix(k) << " element in the given vector is : " << kthsmallest(vec, 0, n - 1, (k % n) - 1);

    return 0;
}