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
vector<int> first_neg(vector<int> &vec, int k)
{
    int n = vec.size(), i = 0, j = k, idx = -1;
    vector<int> ans(n - k + 1, 1);
    while (i < k)
    {
        if (vec[i] < 0)
        {
            idx = i;
            ans[0] = vec[idx];
            break;
        }
        i++;
    }
    i = 1;
    while (j < n)
    {
        if (idx >= i)
            ans[i] = vec[idx];
        else
        {
            int l = i;
            while (l < i + k)
            {

                if (vec[l] < 0)
                {
                    idx = l;
                    ans[i] = vec[idx];
                    break;
                }
                l++;
            }
        }
        i++, j++;
    }
    return ans;
}
int main()
{
    int n, k;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n), ans;
    cout << "Enter all the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Enter the size of window : ";
    cin >> k;
    ans = first_neg(vec, k);
    cout << "The first negetive number in each window of " << k << " element is : ";
    for (int ele : ans)
        cout << ele << " ";

    return 0;
}