#include <iostream>
using namespace std;

int main()
{
    int sub[50], i;
    for (i = 0; i <= 48; i++)
        ; /*as there is semicolom hence for loop will becoming empty
         loop and hence will be exuted 49 times and will iterate at
    i =48 last time takeing value 48+1 ate last loop*/
    {
        sub[i] = i; // sub[49]=49
        cout << sub[i] << endl;//prints sub[49]
    }
    return 0;
}
/*
49
*/