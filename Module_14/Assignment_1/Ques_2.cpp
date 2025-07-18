/*Q2. Input a string of length n and count all the consonants in the given string.*/
#include <iostream>
using namespace std;
int count(string str)
{
    int n = str.size(), count = 0;
    for (int i = 0; i < n; i++)
    {
        int ascai = (int)str[i];
        if ((ascai >= 97 && ascai <= 122) && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
            count++;
        else if ((ascai >= 65 && ascai <= 90) && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
            count++;
    }
}
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);

    cout << "Total number of consonent in the given string is " << count(str);
    return 0;
}