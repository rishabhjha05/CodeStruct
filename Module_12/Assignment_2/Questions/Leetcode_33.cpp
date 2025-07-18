#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string sufix(int i)
{
    if (i == 1)
        return "st";
    else if (i == 2)
        return "nd";
    else if (i == 3)
        return "rd";
    else
        return "th";
}
void vector_input(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " : ";
        cin >> vec[i];
    }
}
void vector_output(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}
void reverse_part(vector<int> &vec, int start, int end)
{
    int i = start, j = end;
    while (i < j)
    {
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--;
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int pivot = -1, n;
    cout << "Enter the size of the vector : ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter all element of the vector : \n";
    vector_input(vec);
    for (int i = vec.size() - 2; i >= 0; i--)
    {
        if (vec[i] < vec[i + 1])
        {
            pivot = i;
            break;
        }
    }
    cout << "The given permutation is : ";
    vector_output(vec);
    if (pivot == -1)
        reverse(vec.begin(), vec.end());
    else
    {
        reverse_part(vec, pivot + 1, n - 1);
        swap(&vec[pivot], &vec[pivot + 1]);
    }
    cout << "\nThe next permutation to given permutation is : ";
    vector_output(vec);
    return 0;
}