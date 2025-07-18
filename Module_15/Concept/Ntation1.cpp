#include <iostream>
using namespace std;
int main()
{
    int c = 0, n, m;
    cout << "Enter the value of n and m resp :";
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c++;
        }
    }
    /*
    time complexity for this function is O(n*m)
    cause total number of iteration are (n(m-1+m-n))/2-->(n*m + (n^2)/2-1/2)-->(n*m)
    as m is bigger than n hence time complexity for this is O(n*m)
    */
    return 0;
}