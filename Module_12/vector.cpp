/*dynamic array */
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(5);
    cout << vec.size() << " " << vec.capacity() << "\n";
    vec.push_back(4);
    cout << vec.size() << " " << vec.capacity() << "\n";
    vec.push_back(3);
    cout << vec.size() << " " << vec.capacity() << "\n";
    vec[3] = 2; // this does not check if the vector is full or not just assign the value if space is available
    cout << vec.size() << " " << vec.capacity() << "\n";
    for (int i = 0; i < 4; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}