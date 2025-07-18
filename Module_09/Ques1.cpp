#include <iostream>
using namespace std;
int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }

    return fact;
}
int combination(int n, int r)
{
    int combi;
    combi = fact(n) / (fact(r) * fact(n - r));
    return combi;
}
int permutation(int n, int r)
{
    int permutation;
    permutation = fact(n) / fact(n - r);
    return permutation;
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r respectively : ";
    cin >> n >> r;
    if (n >= r)
        cout << "The combinations possible for the given value of n and r are : " << combination(n, r) << endl;
    else
        cout << "The number of combination for given parametre is not possible.";
    cout << "The permutations possible for the given value of n and r are : " << permutation(n, r);

    return 0;
}