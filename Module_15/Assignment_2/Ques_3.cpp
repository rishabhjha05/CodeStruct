/*Q3. Calculate the time complexity for the following code snippet.*/
#include <iostream>
using namespace std;
int main()
{
    int c = 0, n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j * j < n; j *= 2)
        {
            c++;
        }
    }
    return 0;
}