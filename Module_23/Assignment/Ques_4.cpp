#include <iostream>
#include <vector>
using namespace std;

string suffix(int n)
{
    switch (n % 10)
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
void find(vector<int> &vec, int &a, int &b)
{
    int res = 0, n = vec.size();
    for (int i = 0; i < n; i++)
        res ^= vec[i];
    if (res == 0)
    {
        a = vec[0];
        int i = 1;
        while (i < n)
            if (vec[i++] != vec[0])
            {
                b = vec[i - 1];
                break;
            }
    }
    else
    {
        b = res;
        int i = 0;
        while (i < n)
            if (vec[i++] != b)
            {
                a = vec[i - 1];
                break;
            }
    }
}
int main()
{
    int n, a, b;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n), ans;
    cout << "Enter all the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    find(vec, a, b);
    cout << "The a element is : " << a;
    cout << "\nThe b element is : " << b;
    return 0;
}