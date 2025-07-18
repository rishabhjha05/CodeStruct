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
void rotate(vector<int> &vec, int k)
{
    while (k > 0)
    {
        int temp = vec[vec.size() - 1];
        for (int i = vec.size() - 1; i > 0; i--)
            vec[i] = vec[i - 1];
        vec[0] = temp;
        k--;
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
    rotate(vec, k);
    cout << "\nThe vector rotated by " << k << "steps is : ";
    for (int j = 0; j < vec.size(); j++)
        cout << vec[j] << " ";
    return 0;
}