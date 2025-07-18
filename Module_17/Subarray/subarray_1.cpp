/*Print all the sub array of given array*/
#include <iostream>
using namespace std;
void generate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n; k++)
        {
            for (int j = i; j <= k; j++)
                cout << arr[j];
            cout << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    generate(arr, n);

    return 0;
}