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
vector<int> runningSum(vector<int> &nums)
{
    int n = nums.size(), i = 1;
    while (i < n)
    {
        nums[i] += nums[i - 1];
        i++;
    }
    return nums;
}
int main()
{
    int n;
    cout << "Enter the siz of the vector :";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int ele : vec)
        cout << ele << " ";
    vec = runningSum(vec);
    cout << "\nThe running sum vector of the given vector will be : ";
    for (int ele : vec)
        cout << ele << " ";
    return 0;
}