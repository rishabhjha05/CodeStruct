/*given a array of weights of goods and number of days to ship them
make a function which returns the minimum load capcity with which is it to be
shiped in exact that number of days given that if machine lift any amount of goods
it will take whole day to ship them*/
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int array_max(vector<int> vec)
{
    int max = INT_MIN, i = 0;
    while (i < vec.size())
    {
        if (max < vec[i])
            max = vec[i];
        i++;
    }
    return max;
}
int array_sum(vector<int> vec)
{
    int sum = 0, i = 0;
    while (i < vec.size())
    {
        sum += vec[i];
        i++;
    }
    return sum;
}
bool check(vector<int> vec, int mid, int days)
{
    int i = 0, sum = 0, day = 0;
    while (i < vec.size())
    {
        if (sum + vec[i] <= mid)
            sum += vec[i];
        else
        {
            sum = 0;
            i--;
            day++;
        }
        i++;
    }
    day++;
    if (day <= days)
        return true;
    else
        return false;
}
int min_load(vector<int> vec, int days)
{
    int low = INT_MIN, high = 0, i = 0;
    while (i < vec.size())
    {
        if (low < vec[i])
            low = vec[i];
        high += vec[i++];
    }
    int ans = low;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(vec, mid, days))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}
int main()
{
    int n, days;
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter the elements of the array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element of the array : ";
        cin >> vec[i];
    }
    cout << "Enter number of days : ";
    cin >> days;
    cout << "The minimum load capacity should be of : " << min_load(vec, days);
    return 0;
}