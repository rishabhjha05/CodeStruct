#include <iostream>
#include <vector>
using namespace std;
void fun1()
{
    vector<int> a, b;
    int n, m;
    cout << "Enter the value of n and m respectively : ";
    cin >> n, m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            a.push_back(i);
            b.push_back(j);
        }
    /*
    NOw the time complexity for the given code is O(n*m)
    and the space complexity is O(2*n*m)-->O(n*m) as we pushback for n*m time the size of both the
    vector will be n*m which lead to total use of 2*n*m extra space hence
    O(n*m)
    */
}
void fun2()
{
    int n, m;
    cout << "Enter the value of n and m respectively : ";
    cin >> n, m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            a[i] = i;
            b[j] = j;
        }
    /*
    The time complexity for the given function will be O(n*m)
    and the space complexity will be O(n+m) only as
    two vector of size n and m are used and we can't execess the vector
    after predefined size by using index only hence space complexity remains
    O(n+m);
    */
}
void fun3()
{
    int n, m;
    cout << "Enter the value of n and m respectively : ";
    cin >> n, m;
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            vec[i][j] = i * j;
    /*
    this will also have time complexity of O(n*m)
    and the space complexity of O(n*m) as we built a grid or
    2D vector of n rows and m column
    */
}
void fun4()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
 
    int a[n][n / 2];
    for (int i = 1; i < n; i *= 2)
    {
        for (int j = 0; j < n / 2; j++)
            a[i][j]++;
    }
    /*
    space complexity for the given code will be n*n/2-->O((n^2)*1/2)-->O(n^2)
    and the time complexity for the given code will be O((n/2)*logn)-->O(nlogn)
    as outer loop will iterate for log n to the base 2 time and inner loop will iterate for 
    n/2 time hence the total number of iteration will be 
    */
}
void fun5(int n)
{
    int c=0;
    for (int i = 1; i <=n ; i+=i)
    {
        c++;
    }
    /*
    Time complexity for the given code will be O(log n);
    as i+=i --> i=i+i --> i=2*i --> i*=2;
    hence i will increase as i=1 i=2 i=2^2 i=2^3 i=2^4..... i=2^x
    where 2^x>=n exceeds or equal to n which aproxx to 2^x=n
    where total number of iteration are x+1
    so time complexity will be O(x+1)
    2^x=n taking log to the base 2 both side we get 
    x=log n with base 2;
    hence time complexity will be O(logn)
    space complexity for the given code will be O(1);
    */
    
}
int main()
{
    vector<int> a, b;
    int n, m;
    cout << "Enter the value of n and m respectively : ";
    cin >> n, m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            a[i]++;
            b[j]++;
        }
    /*
    time complexity is O(n*m)
    and space complexity is O(1) as no space was given to the vectors
    hence we have to push_back element to increase its capacity
    */
    return 0;
}