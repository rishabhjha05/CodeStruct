#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter any string : ";
    getline(cin, str);
    sort(str.begin(), str.end());

    int i = 0, n = str.size(), maxcount = 0, max_idx = -1, curr_count = 1;
    while (i < n - 1)
    {

        if (str[i] == str[i + 1])
            curr_count++;
        else
        {
            if (maxcount < curr_count)
            {
                max_idx = i;
                maxcount = curr_count;
            }
            curr_count = 1;
        }

        i++;
    }
    cout << "The element which is occurring maximum times in the given sring is : " << str[max_idx];
    return 0;
}