/*Q3. Input a string and return the number of substrings that contain only vowels.*/
#include <iostream>
using namespace std;
int count(string str)
{
    int count = 0, x = 0;
    for (int i = 0; i < (int)str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            x++;
        else
        {
            count += x * (x + 1) / 2;
            x = 0;
        }
    }
    count += x * (x + 1) / 2;
    return count;
}
int main()
{
    string str;
    cout << "Enter a string of lowercase alphabet : ";
    getline(cin, str);
    count(str);
    cout << "The total number of possible substrings containing only vowels for the given string is : " << count(str);

    return 0;
}
