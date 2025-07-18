/*leetcode - 875 Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from
that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
Return the minimum integer k such that she can eat all the bananas within h hours.*/
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
bool check(vector<int> vec, int h, int mid)
{
    int i = 0, count = 0;
    while (i < vec.size())
    {
        if (vec[i] % mid == 0)
            count += vec[i] / mid;
        else
            count += vec[i] / mid + 1;
        i++;
    }
    if (count <= h)
        return true;
    return false;
}
int min_speed(vector<int> vec, int h)
{
    int low = 1, high = INT_MIN, speed = 1;
    for (int i = 0; i < vec.size(); i++)
        if (high < vec[i])
            high = vec[i];
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(vec, h, mid))
        {
            speed = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return speed;
}
int main()
{
    int n, h;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> vec[i];
    }
    cout << "Enter the number of hours : ";
    cin >> h;
    cout << "The minimum speed of koko shoud be " << min_speed(vec, h) << " to eat the given number of banana in exact given time";

    return 0;
}