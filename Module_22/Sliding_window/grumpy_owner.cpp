#include <iostream>
#include <vector>
#include <limits.h>
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
int maxsatisfied(vector<int> hours, vector<int> grumpy, int m)
{
    int n = hours.size(), i = 0, j = m, curr_loss = 0, max_loss = INT_MIN, loss_idx = -1;
    while (i < m)
    {
        curr_loss += hours[i] * grumpy[i];
        i++;
    }
    max_loss = max(max_loss, curr_loss);
    loss_idx = 0;
    i = 1;
    while (j < n)
    {
        int error = hours[j] * grumpy[j] - hours[i - 1] * grumpy[i - 1];
        curr_loss = curr_loss + error;
        if (max_loss < curr_loss)
        {
            max_loss = curr_loss;
            loss_idx = i;
        }
        i++, j++;
    }
    i = loss_idx, j = 0;
    while (i < loss_idx + m)
        grumpy[i++] = 0;
    int cust_sum = 0, disatisfied_cust = 0;
    while (j < n)
    {
        cust_sum += hours[j];
        disatisfied_cust += hours[j] * grumpy[j];
        j++;
    }
    return cust_sum - disatisfied_cust;
}
int main()
{
    int n, m;
    cout << "Enter the number of customers hours : ";
    cin >> n;
    cout << "Enter th enumber of customers in each hour \n";
    vector<int> hours(n), grumpy(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number of customer in " << i + 1 << suffix(i + 1) << " hour : ";
        cin >> hours[i];
    }
    cout << "Enter all the elements of the grumpy vector \n";
    for (int j = 0; j < n; j++)
    {
        cout << "Is owner grumpy at " << j + 1 << suffix(j + 1) << " hour : ";
        cin >> grumpy[j];
    }
    cout << "Enter the number of hours for which owner can control himself : ";
    cin >> m;
    cout << "The maximum number of customers can be satisfied is : " << maxsatisfied(hours, grumpy, m);
    return 0;
}