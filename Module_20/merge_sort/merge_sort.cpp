#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> a, vector<int> b, vector<int> &vec)
{
    int i = 0, j = 0, k = 0, n1 = a.size(), n2 = b.size();
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            vec[k++] = a[i++];
        else
            vec[k++] = b[j++];
    }
    if (i == n1)
        while (j < n2)
            vec[k++] = b[j++];
    else
        while (i < n1)
            vec[k++] = a[i++];
}
void merge_sort(vector<int> &vec)
{
    int n = vec.size(), n1 = n / 2, n2 = n - n / 2;
    if (n == 1)
        return;

    vector<int> vec1(n1), vec2(n2);

    for (int i = 0; i < n1; i++)
        vec1[i] = vec[i];
    for (int j = 0; j < n2; j++)
        vec2[j] = vec[n1 + j];
    merge_sort(vec1);
    merge_sort(vec2);
    merge(vec1, vec2, vec);
    vec1.clear();//improves the space complexity from O(nlogn) to O(n)
    vec2.clear();//improves the space complexity from O(nlogn) to O(n)
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

    merge_sort(vec);
    cout << "The sorted array is : ";
    for (int ele : vec)
        cout << ele << " ";

    return 0;
}