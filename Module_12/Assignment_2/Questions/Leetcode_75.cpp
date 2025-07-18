/*leet code problem 75 
https://leetcode.com/problems/sort-colors/submissions/1493216285*/

#include <iostream>
#include <vector>
using namespace std;
string sufix(int i)
{
    if (i == 1)
        return "st";
    else if (i == 2)
        return "nd";
    else if (i == 3)
        return "rd";
    else
        return "th";
}
void sort(vector<int> &vec)
{
    for (int i = 0; i <= vec.size() - 2; i++)//here vec.size()-2 will return unsigned integer
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[i])
            {
                int temp = vec[j];
                vec[j] = vec[i];
                vec[i] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of the vector you want : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " : ";
        cin >> vec[i];
    }
    sort(vec);
    cout << "The sorted vector is : ";
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";

    return 0;
}