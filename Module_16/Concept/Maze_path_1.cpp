/*write a function to calculate number of ways to reach a designated coordinate
from a given reference coordinate*/
#include <iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec)
        return 0;
    else if (sr == er && sc == ec)
        return 1;
    int rightways = maze(sr, sc + 1, er, ec);
    int downways = maze(sr + 1, sc, er, ec);
    return rightways + downways;
}
int main()
{
    int sr, sc, er, ec;
    cout << "Enter the x coordinate of reference point : ";
    cin >> sr;
    cout << "Enter the y coordinate of reference point : ";
    cin >> sc;
    cout << "Enter the x coordinate of designated point : ";
    cin >> er;
    cout << "Enter the y coordinate of designated point : ";
    cin >> ec;
    cout << "Total number of possible ways to reach at designated point from given reference point is : " << maze(sr, sc, er, ec);
    return 0;
}