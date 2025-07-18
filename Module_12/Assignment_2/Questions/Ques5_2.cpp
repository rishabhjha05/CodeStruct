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
void rotate_part(vector<int> &vec, int start, int end)
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
    int n, k;
    cout << "Enter the size of the vector you want : ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " : ";
        cin >> vec[i];
    }
    cout << "Enter the value of k : ";
    cin >> k;
    if (k > vec.size())
        k = k % vec.size();
    cout << "The entered vector is : ";
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";
    rotate_part(vec, 0, vec.size() - 1 - k);
    rotate_part(vec, vec.size() - k, vec.size() - 1);
    rotate_part(vec, 0, vec.size() - 1);
    cout << "\nThe vector rotated by " << k << " steps is : ";
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";
    return 0;
}