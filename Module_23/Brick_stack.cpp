#include <iostream>
using namespace std;
int main()
{
    float l, b, h, totalVol, brickVol = .4 * .35 * .8;
    cout << "Enter the number of bricks stacked in a row : ";
    cin >> b;
    cout << "Enter the number of bricks stacked in a colounm : ";
    cin >> l;
    cout << "Enter the number of bricks stacked vertically : ";
    cin >> h;
    l *= 0.4, b *= 0.4, h *= 0.4;
    totalVol = l * b * h;
    cout << "Approximately number of bricks in the stack would be : " << totalVol / brickVol;
    return 0;
}