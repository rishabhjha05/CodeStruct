#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the desired size of the vector : ";
    cin >> n;
    vector<int> vec; // declaring vector named vec without size
    vec.push_back(5);
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        vec.push_back(x);
    } // this is the way to get input in the vector declared with no size
    cout << endl
         << vec.size() << " " << vec.capacity();
    cout << " (Vectotr vec is : ";
    display(vec);
    cout
        << " )";

    vec.pop_back(); // this is usefd to remove the last element from the vector
    cout << endl
         << vec.size() << " " << vec.capacity();
    cout << " (Vectotr vec is : ";
    display(vec);
    cout
        << " )";

    vec.pop_back(); // it does not affect the capacity of the vector tough decrease the size of the vector
    cout << endl
         << vec.size() << " " << vec.capacity();
    cout << " (Vectotr vec is : ";
    display(vec);
    cout
        << " )";

    cout << "\n"
         << vec.at(3) << endl;
    sort(vec.begin(), vec.end());
    cout << "The sorted vector is : ";
    display(vec);
    return 0;
}