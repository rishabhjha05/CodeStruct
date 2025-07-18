#include <iostream>
#include <vector>
#include <limits.h>
#include <limits>
using namespace std;
string sufix(int i)
{
    if (i == 0)
        return "st";
    else if (i == 1)
        return "nd";
    else if (i == 2)
        return "rd";
    else
        return "th";
}
int max_idx(vector<string> string_set)
{
    int max_idx = -1, n = string_set.size(), i = 0;
    long long max = INT_MIN;
    while (i < n)
    {
        long long x = stoll(string_set[i]);
        if (x > max)
        {
            max_idx = i;
            max = x;
        }
        i++;
    }
    return max_idx;
}
long long value(vector<string> string_set, int i)
{
    long long x = stoll(string_set[i]);
    return x;
}
int main()
{
    int n, i = 0;
    cout << "Enter the number of string you want int the vector : ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<string> string_set(n);
    while (i < n)
    {
        cout << "Enter " << i + 1 << sufix(i) << " string : ";
        getline(cin, string_set[i]);
        i++;
    }
    int x = max_idx(string_set);
    cout << "The string having maximum value is at " << x << sufix(i + 1) << " index and that is " << value(string_set, x);

    return 0;
}