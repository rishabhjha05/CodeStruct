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
    int low = 0, mid = 0, high = vec.size() - 1;
    while (mid <= high)
    {
        if (vec[mid] == 2)
        {
            int temp = vec[mid];
            vec[mid] = vec[high];
            vec[high] = temp;
            high--;
        }
        else if (vec[mid] == 0)
        {
            int temp = vec[mid];
            vec[mid] = vec[low];
            vec[low] = temp;
            low++;
            mid++;
        }
        else if (vec[mid] == 1)
            mid++;
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