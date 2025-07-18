/*
5 Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
and display the sorted array.
*/
#include <iostream>
#include <string>
using namespace std;

string bubble_sort(string str)
{
    for (int i = 0; i < str.size() - 1; i++)
    {
        for (int j = 0; j < str.size() - i - 1; j++)
        {
            if (str[j] > str[j + 1])
                swap(str[j], str[j + 1]);
        }
    }
    return str;
}
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    str = bubble_sort(str);
    cout<< str;
    return 0;
}