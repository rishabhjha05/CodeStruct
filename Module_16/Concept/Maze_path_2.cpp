/*write function to find total number of ways to reach a given 
point from 1,1 using only 2 variable*/
#include <iostream>
using namespace std;
int maze(int er, int ec)
{
    if (er < 1 || ec < 1)
        return 0;
    else if (er == 1 && ec == 1)
        return 1;
    int rightways = maze(er, ec - 1);
    int downways = maze(er - 1, ec);
    return rightways + downways;
}
int main()
{
    int er, ec;
    cout << "Enter the x coordinate of designated point : ";
    cin >> er;
    cout << "Enter the y coordinate of designated point : ";
    cin >> ec;
    cout << "Total number of ways to reach at the designated point from (1,1) is : " << maze(er, ec);
    return 0;
}