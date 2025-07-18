/*Q5. Given a sentence ‘str’, return the word that is lexicographically maximum.*/
#include <iostream>
using namespace std;

string maximum(string str)
{
    int n = str.size();
    string mx = "", word = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            cout << "Comparing: " << word << " with " << mx << endl;
            if (word > mx)
                mx = word;
            word = "";
        }
        else
            word += str[i];
    }
    if (mx < word)
        mx = word;

    return mx;
}
int main()
{
    string str;
    cout << "Enter a sentence : ";
    getline(cin, str);
    cout << "The word which is lexicographically maximum is : " << maximum(str);

    return 0;
}
