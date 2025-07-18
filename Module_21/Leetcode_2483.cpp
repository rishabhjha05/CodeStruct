#include <iostream>
#include <vector>
#include <string>
using namespace std;
int bestClosingTime(string hour)
{
    int n = hour.size() + 1, i = 1, min_idx = 0;
    vector<int> pre_n(n), suf_y(n), penelty(n);
    pre_n[0] = 0, suf_y[n - 1] = 0;
    while (i < n)
    {
        pre_n[i] = pre_n[i - 1] + ((hour[i - 1] == 'N') ? 1 : 0);
        i++;
    }
    i = n - 2;
    while (i >= 0)
    {
        suf_y[i] = suf_y[i + 1] + ((hour[i] == 'Y') ? 1 : 0);
        i--;
    }
    i = 0;
    while (i < n)
    {
        penelty[i] = pre_n[i] + suf_y[i];
        if (penelty[min_idx] > penelty[i])
            min_idx = i;
        i++;
    }
    return min_idx;
}
int main()
{
    string str;
    cout << "Enter the hour string representing Y and N : ";
    getline(cin, str);
    cout << "The minimum penelty will be when he close show at : " << bestClosingTime(str);
    return 0;
}