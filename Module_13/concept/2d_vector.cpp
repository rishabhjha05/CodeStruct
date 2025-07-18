#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vec;                        // declared a vector of vector named vec
    vector<vector<int>> vec2(4, vector<int>(3, 0)); /*this declare the vector of size 4 which ,eans this vec2
     can store up to 4 vector in it means 4 rows can be stored and each row hav vector of size 3 intialize
     with 0 means it hac 3 column in it means it is a 4*3 matrix this 2d vector is dynamic in size you can
     also store vector of different size in it*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << vec2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}