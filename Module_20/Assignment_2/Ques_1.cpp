/*Ques1 Given an array of integers, sort it in descending order using
merge sort algorithm. */
#include <iostream>
#include <vector>
using namespace std;
string suffix(int i)
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

void merge(vector<int> &vec1, vector<int> &vec2, vector<int> &res)
{
    int i = 0, j = 0, k = 0, n1 = vec1.size(), n2 = vec2.size(), n = res.size();
    while (i < n1 && j < n2)
    {
        if (vec1[i] < vec2[j])
            res[k++] = vec1[i++];
        else
            res[k++] = vec2[j++];
    }
    while (i < n1)
        res[k++] = vec1[i++];
    while (j < n2)
        res[k++] = vec2[j++];
}
void merge_sort(vector<int> &vec)
{
    if (vec.size() == 1)
        return;
    int n = vec.size(), n1 = n / 2, n2 = n - n1, i = 0;
    vector<int> vec1(n1), vec2(n2);
    while (i < n1)
    {
        vec1[i] = vec[i];
        i++;
    }
    while (i < n)
    {
        vec2[i - n1] = vec[i];
        i++;
    }
    merge_sort(vec1);
    merge_sort(vec2);
    merge(vec1, vec2, vec);
    vec1.clear();
    vec2.clear();
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe sorted vector is : ";
    merge_sort(vec);
    for (int ele : vec)
        cout << ele << " ";

    return 0;
}