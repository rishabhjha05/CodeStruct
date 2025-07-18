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
void reverse_part(vector<int> &vec, int start, int end)
{
    int i = start, j = end;
    while (i < j)
    {
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int n, start, end;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " : ";
        cin >> vec[i];
    }
    cout << "Enter the start index : ";
    cin >> start;
    cout << "Enter the end index : ";
    cin >> end;

    cout << "The given vector is : ";
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";

    reverse_part(vec, start, end);

    cout << "\nThe reversed vector is : ";
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";

    return 0;
}