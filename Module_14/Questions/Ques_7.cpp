#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter any string : ";
    getline(cin, str);
    int i = 0, count = 0, n = str.size();
    while (i < n)
    {
        if (i == 0 || i == n - 1)
        {
            if (i == 0 && str[0] != str[1])
                count++;
            if (i == n - 1 && str[n - 1] != str[n - 2])
                count++;
            i++;
            continue;
        }
        if (str[i] != str[i - 1] && str[i] != str[i + 1])
            count++;
        i++;
    }
    cout << "Total " << count << " instense comes when neighbouring element are different.";
    return 0;
}