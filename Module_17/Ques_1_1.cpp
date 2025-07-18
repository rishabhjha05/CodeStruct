#include <iostream>
#include <string>
using namespace std;
void erase(string sentence, string str, char ch)
{
    if (sentence.size() == 0)
    {
        cout << "The required sentence is : " << str;
        return;
    }
    if (sentence[0] == ch)
        erase(sentence.substr(1), str, ch);
    else
        erase(sentence.substr(1), str + sentence[0], ch);
}
int main()
{
    string sentence;
    char ch;

    cout << "Enter any sentence : ";
    getline(cin, sentence);
    cout << "Enter the character you want to erase from the given sentence : ";
    cin >> ch;
    erase(sentence, "", ch);
    return 0;
}