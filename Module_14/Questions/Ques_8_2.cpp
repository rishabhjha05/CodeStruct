#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str;
    cout << "Enter any string only in lowercase : ";
    getline(cin, str);
    int n = str.size(), max = 0;
    vector<int> alpha(26, 0);
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        int ascaii = (int)ch;
        alpha[ascaii - 97]++;
    }

    for (int j = 0; j < 26; j++)
    {
        if (max < alpha[j])
            max = alpha[j];
    }
    cout << "These element repeats maximum times \n";
    for (int k = 0; k < 26; k++)
    {
        if (alpha[k] == max)
            cout << (char)(k + 97) << " : " << max << endl;
    }

    return 0;
}