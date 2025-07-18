#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "geeksforgeeks", s2 = "geeksquiz";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    cout << s1 << endl
         << s2;
    return 0;
}
