#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec(5); // declared a vector of size 5 and each 5 box having default value as 0 if not specified
    cout << vec.size() << " " << vec.capacity() << endl;
    for (int i = 0; i < 5; i++)
        cout << vec[i] << " ";

    int size;
    cout << "\nEnter the size of the vector ";
    cin >> size;
    vector<int> vec2(size);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec2[i];
    }
    cout << "The entered vector : ";
    for (int i = 0; i < size; i++)
        cout << vec2[i] << " ";
    sort(vec2.begin(), vec2.end()); // function in algorithm
    cout << "\nsorted vector : ";
    for (int i = 0; i < size; i++)
        cout << vec2[i] << " ";
    

    return 0;
}