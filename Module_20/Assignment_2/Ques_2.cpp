/*Q2. Reverse Pairs (Leetcode Problem) : Given an integer array nums, return the number of reverse
pairs in the array.
A reverse pair is a pair (i, j) where:
0 <= i < j < nums.length and
nums[i] > 2 * nums[j].
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
void merge(vector<int> &vec1, vector<int> &vec2, vector<int> &res)
{
    int i = 0, j = 0, k = 0, n1 = vec1.size(), n2 = vec2.size(), n = n1 + n2;
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

int count_inversion(vector<int> vec)
{
    int n = vec.size(), n1 = n / 2, n2 = n - n1, i = 0, cnt = 0;
    if (n == 1)
        return 0;
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
    cnt += count_inversion(vec1);
    cnt += count_inversion(vec2);
    i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if ((long long)vec1[i] > (long long)2 * vec2[j])
        {
            cnt += n1 - i;
            j++;
        }
        else
            i++;
    }
    merge(vec1, vec2, vec);

    return cnt;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements of the vector\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The number of inversions present for the given vector is " << count_inversion(vec);
    return 0;
}