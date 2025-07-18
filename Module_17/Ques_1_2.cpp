#include <iostream>
#include <string>
using namespace std;
void erase(string sentence, string str, char ch, int idx)
{
    if (idx == sentence.size())
    {
        cout << "The required sentence is : " << str;
        return;
    }
    else if (sentence[idx] == ch)
        erase(sentence, str, ch, idx + 1);
    else
        erase(sentence, str + sentence[idx], ch, idx + 1);
}
/*
instead of passing the substring each time we sent idx which will keep on
increasing on each iteration 
*/
int main()
{
    string sentence;
    char ch;

    cout << "Enter any sentence : ";
    getline(cin, sentence);
    cout << "Enter the character you want to erase from the given sentence : ";
    cin >> ch;
    erase(sentence, "", ch, 0);
    return 0;
}