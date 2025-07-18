/*You are given an array time where time[i] denotes the time taken by the ith bus to complete one trip.
Each bus can make multiple trips successively; that is, the next trip can start immediately after
completing the current trip. Also, each bus operates independently; that is, the trips of one bus do
not influence the trips of any other bus.
You are also given an integer totalTrips, which denotes the number of trips all buses should make in total. Return the minimum
time required for all buses to complete at least totalTrips trips.*/
#include <iostream>
#include <vector>
using namespace std;
bool check(int hours, vector<int> time, int trip)
{
    int count = 0;
    for (int i = 0; i < time.size(); i++)
        count += hours / time[i];
    if (count >= trip)
        return true;
    return false;
}
long long min_time(vector<int> time, int trip)
{
    long long low = 1, high = -1, min_time = 1;
    for (int i = 0; i < time.size(); i++)
        if (high < time[i])
            high = time[i];
    high *= trip;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;

        if (check(mid, time, trip))
        {
            min_time = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return min_time;
}
int main()
{
    int n, trip;
    cout << "Enter thr size of the vector : ";
    cin >> n;
    vector<int> time(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> time[i];
    }
    cout << "Enter the number of trips to be completed : ";
    cin >> trip;
    cout << "The minimum time to complete the given number of trip is : " << min_time(time, trip);
    return 0;
}