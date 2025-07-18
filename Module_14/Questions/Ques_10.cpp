#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    string str, temp;
    cout << "Enter any sentence : ";
    getline(cin, str);
    stringstream s(str);
    vector<string> vec;
    while (s >> temp)
    {
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    int count = 1, max_count = 0, max_idx;
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == vec[i - 1])
            count++;
        else
        {
            if (max_count < count)
            {
                max_count = count;
                max_idx = i - 1;
            }
            count = 1;
        }
    }
    cout << "The most occurring word is : " << vec[max_idx] << " which comes " << max_count << " Times in the given sentence";
    return 0;
}