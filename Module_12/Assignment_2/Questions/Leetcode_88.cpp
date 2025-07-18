#include <iostream>
#include <vector>
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
void input(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " : ";
        cin >> vec[i];
    }
}
void merge(vector<int> &vec1, vector<int> &vec2, vector<int> &merj)
{
    int n = vec1.size(), m = vec2.size();
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (vec1[i] < vec2[j])
            merj[k++] = vec1[i++];
        else if (vec1[i] > vec2[j])
            merj[k++] = vec2[j++];
        else
            merj[k++] = vec1[i++];
    }
    if (i == n)
    {
        while (k < (n + m))
        {
            merj[k] = vec2[j];
            j++;
            k++;
        }
    }

    else if (j == m)
    {
        while (k < (n + m))
        {
            merj[k] = vec1[i];
            i++;
            k++;
        }
    }
}
int main()
{
    int n, m;
    cout << "Enter the size of first vector : ";
    cin >> n;
    cout << "Enter the size of secon vector : ";
    cin >> m;
    vector<int> vec1(n), vec2(m), merj(m + n);
    cout << "\nEnter the first sorted vector : \n";
    input(vec1);
    cout << "\nEnter the second sorted vector : \n";
    input(vec2);
    merge(vec1, vec2, merj);
    cout << "The merged vector of given two sorted vector is : ";
    for (int i = 0; i < (m + n); i++)
        cout << merj[i] << " ";

    return 0;
}