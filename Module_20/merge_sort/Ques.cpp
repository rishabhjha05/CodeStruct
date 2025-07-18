/*Write a function to sort a given array in decreasing order*/
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &vec)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
        if (a[i] < b[j])
            vec[k++] = b[j++];
        else
            vec[k++] = a[i++];
    if (i == a.size())
        while (j < b.size())
            vec[k++] = b[j++];
    else
        while (i < a.size())
            vec[k++] = a[i++];
}
void merge_sort(vector<int> &vec)
{
    if (vec.size() <= 1)
        return;
    int n = vec.size(), n1 = n / 2, n2 = n - n / 2, i = 0, j = 0;
    vector<int> vec1(n1), vec2(n2);
    while (i < n1)
    {
        vec1[i] = vec[i];
        i++;
    }
    while (j < n2)
    {
        vec2[j] = vec[n1 + j];
        j++;
    }
    merge_sort(vec1);
    merge_sort(vec2);
    merge(vec1, vec2, vec);
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
    merge_sort(vec);
    cout << "The sorted array in decreasing seq is : ";
    for (int ele : vec)
        cout << ele << " ";
    return 0;
}