#include <iostream>
#include <vector>
using namespace std;
string suffix(int n)
{
    switch (n % 10)
    {
    case 1:
        return "st";
    case 2:
        return "nd";
    case 3:
        return "rd";
    default:
        return "th";
    }
}
int distinctPrimes(vector<int> &vec)
{
    long long n = vec.size(), i = 0, product = 1, count = 0;
    while (i < n)
        product *= vec[i++];
    for (int i = 2; i <= product && product > 1; i++)
    {
        bool found = false;
        while (product % i == 0)
        {
            found = true;
            product /= i;
        }
        if (found)
            count++;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter all the elements of the vector \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
        cin >> vec[i];
    }
    cout << "Number of distinct prime factor for the product of all element in the vector is : " << distinctPrimes(vec);
    return 0;
}