#include <iostream>
#include <vector>
#include <algorithm>
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

int max_rating(vector<int> &rating)
{
    sort(rating.begin(), rating.end());
    int n = rating.size(), i = n - 2, idx = n, maxrating = 0;
    vector<int> suf_s(n);
    suf_s[n - 1] = rating[n - 1];
    while (i >= 0)
    {
        suf_s[i] = suf_s[i + 1] + rating[i];
        if (suf_s[i] > 0)
            idx = i;
        i--;
    }
    i = 1;
    while (idx < n)
    {
        maxrating += suf_s[idx];
        idx++;
    }
    return maxrating;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> dish_rating(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> dish_rating[i];
    }
    cout << "The maximum rating can be obtained is : " << max_rating(dish_rating);

    return 0;
}
//- 1, -8, 0, 5, -7