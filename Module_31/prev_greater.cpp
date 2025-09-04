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
vector<int> prev_greater(vector<int> vec){
    int n=vec.size(),i=0;
    vector<int> prevG(n);
    stack<int> st;
    while(i<n){
        while(st.size()!=0 && st.top()<=vec[i])
            st.pop();
        if(st.size()==0)
            prevG[i]=-1;
        else if(st.top()>vec[i])
            prevG[i]=st.top();
        st.push(vec[i++]);
    }
    return prevG;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n),prevG(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    prevG=prev_greater(vec);
    cout << "The given vector was : ";
    for (int ele : vec)
        cout << ele << " ";
    cout << "\nThe previous greater vector for the given vector is : ";
    for (int ele : prevG)
        cout << ele << " ";
    return 0;
}