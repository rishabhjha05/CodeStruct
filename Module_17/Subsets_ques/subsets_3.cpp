/*store and Print all the sub set of the given string*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void subset(string ans, string original, int idx, vector<string> &vec)
{
    if (idx == original.size())
    {
        vec.push_back(ans);
        return;
    }
    subset(ans + original[idx], original, idx + 1, vec);
    subset(ans, original, idx + 1, vec);
}
void print(vector<string> vec)
{
    for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << endl;
}
int main()
{
    string str;
    vector<string> vec;
    cout << "Enter any string : ";
    getline(cin, str);
    subset("", str, 0, vec);
    print(vec);
    return 0;
}