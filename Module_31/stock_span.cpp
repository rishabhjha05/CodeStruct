#include <iostream>
#include <vector>
#include <stack>
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
vector<int> stock_span(vector<int> vec)
{
    int n = vec.size(), i = 0;
    vector<int> span(n);
    stack<int> prevG;
    while (i < n)
    {
        while (prevG.size() != 0 && vec[prevG.top()] <= vec[i])
            prevG.pop();
        if (prevG.size() == 0)
            span[i] = i + 1;
        else
            span[i] = i - prevG.top();
        prevG.push(i++);
    }
    return span;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n), span(n);
    cout << "Enter the stock prices : ";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the stock price on " << i + 1 << suffix(i + 1) << " day : ";
        cin >> vec[i];
    }
    span = stock_span(vec);
    cout << "The stock span vector for given prices at diff days is : ";
    for (int ele : span)
        cout << ele << " ";
    return 0;
}