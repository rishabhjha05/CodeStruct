/*write a function to calculate number of ways to reach a designated coordinate
from a given reference coordinate and also print all that ways*/
#include <iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec, string str)
{
    if (sr > er || sc > ec)
        return 0;
    else if (sr == er && sc == ec)
    {
        cout << str << endl;
        return 1;
    }
    int rightways = maze(sr, sc + 1, er, ec, str + 'R');
    int downways = maze(sr + 1, sc, er, ec, str + 'D');
    return rightways + downways;
}
int main()
{
    int sr, sc, er, ec;
    string str = {};
    cout << "Enter the x coordinate of reference point : ";
    cin >> sr;
    cout << "Enter the y coordinate of reference point : ";
    cin >> sc;
    cout << "Enter the x coordinate of designated point : ";
    cin >> er;
    cout << "Enter the y coordinate of designated point : ";
    cin >> ec;
    cout << "Total number of possible ways to reach at designated point from given reference point is : " << maze(sr, sc, er, ec, str);
    return 0;
}