/*
Q3. Given an array where all its elements are sorted in increasing order
except two swapped elements, sort it in linear time. Assume there are no
duplicates in the array.

Input: A[] = [3, 8, 6, 7, 5, 9, 10]
Output: A[] = [3, 5, 6, 7, 8, 9, 10]
*/
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

void sort(vector<int> &vec)
{
    int n = vec.size(), ele = vec[n / 2], count = 0, i = 0;
    while (i < n)
        if (vec[i++] < ele)
            count++;
    if (count != n / 2)
        swap(vec[count], vec[n / 2]);
    else
    {
        int i = 0, j = n;
        while (i < n / 2 && j > n / 2)
            if (vec[i] > vec[n / 2] && vec[j] < vec[n / 2])
            {
                swap(vec[i], vec[j]);
                return;
            }
            else if (vec[i] < vec[n / 2])
                i++;
            else
                j--;
    }
    return;
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
    sort(vec);
    cout << "\nThe sorted vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    return 0;
}
