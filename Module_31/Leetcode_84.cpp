#include <iostream>
#include <vector>
#include <stack>
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
int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size(), i = 0, maxArea = 0;
    vector<int> prevS(n), nextS(n), maxBreath(n);
    stack<int> st;
    while (i < n)
    {
        while (st.size() != 0 && heights[st.top()] >= heights[i])
            st.pop();
        if (st.size() == 0)
            prevS[i] = -1;
        else
            prevS[i] = st.top();
        st.push(i++);
    }
    i--;
    st = stack<int>();
    while (i >= 0)
    {
        while (st.size() != 0 && heights[st.top()] >= heights[i])
            st.pop();
        if (st.size() == 0)
            nextS[i] = n;
        else
            nextS[i] = st.top();
        st.push(i--);
    }
    i = 0;
    while (i < n)
    {
        maxBreath[i] = nextS[i] - prevS[i] - 1;
        i++;
    }
    i = 0;
    while (i < n)
        maxArea = max(maxArea, maxBreath[i] * heights[i++]);
    return maxArea;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " height of the vector : ";
        cin >> heights[i];
    }
    cout << "The largest area of rectangle can be made will be : " << largestRectangleArea(heights);

    return 0;
}