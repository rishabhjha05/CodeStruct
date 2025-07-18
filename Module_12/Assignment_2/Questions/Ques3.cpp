#include <iostream>
#include <vector>
#include <algorithm>

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
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " : ";
        cin >> vec[i];
    }
    cout << "The given vector is : ";
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";

    cout << endl;
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--; 
    }
    cout << "The reversed vector is : ";
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";

    cout << "\nThe reverse of reversed vector is : ";
    reverse(vec.begin(), vec.end());//built in function in algorithm to reverse a vector
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";
    return 0;
}