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
vector<int> next_greater(vector<int> vec)
{
    int n = vec.size(), i = n - 1;
    stack<int> st;
    vector<int> nextG(n);
    while (i >= 0)
    {
        while (st.size() > 0 && st.top() <= vec[i])
            st.pop();
        if (st.size() == 0)
            nextG[i] = -1;
        else if (st.top() > vec[i])
            nextG[i] = st.top();
        st.push(vec[i--]);
    }
    return nextG;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec, nextG;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> val;
        vec.push_back(val);
    }
    nextG = next_greater(vec);
    cout << "The given vector was : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe next greater vector for the given vector is : ";
    for (int ele : nextG)
        cout << ele << " ";
    return 0;
}