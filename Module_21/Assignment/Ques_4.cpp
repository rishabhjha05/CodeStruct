/*Q4. There are n flights that are labeled from 1 to n. You are given an array of flight
bookings bookings , where bookings[i] = [firsti, lasti, seatsi] represents a booking for
flights firsti through lasti (inclusive) with seatsi seats reserved for each flight in the
range. Return an array answer of length n , where answer[i] is the total number of seats
reserved for flight i. [Leetcode 1109]

Example 1:
Input: bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
Output: [10,55,45,25,25]
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
vector<int> flight_booking(vector<vector<int>> &vec, int n)
{
    int n2 = vec.size(), i = 0;
    vector<int> ans(n, 0);
    while (i < n2)
    {
        int start = vec[i][0] - 1, end = vec[i][1] - 1, seat = vec[i][2];
        if (start >= 0)
            ans[start] += seat;
        if (end <= n - 2)
            ans[end + 1] -= seat;
        i++;
    }
    i = 1;
    while (i < n)
    {
        ans[i] += ans[i - 1];
        i++;
    }
    return ans;
}
int main()
{
    int n, no;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(3));
    vector<int> ans;
    cout << "Enter the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " vector of the bookings : ";
        for (int j = 0; j < 3; j++)
            cin >> vec[i][j];
    }
    cout << "Enter the number of flights : ";
    cin >> no;
    cout << "The given vector is : [";
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < 3; j++)
            cout << vec[i][j] << ",";
        cout << "],";
    }
    ans = flight_booking(vec, no);
    cout << "]\nThe required vector is : ";
    for (int ele : ans)
        cout << ele << " ";
    return 0;
} //[[1,2,10],[2,3,20],[2,5,25]]