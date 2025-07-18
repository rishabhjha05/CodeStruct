#include <iostream>
using namespace std;
void display(int *a)
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0]; // valid
    int *ptr2 = arr;    // valid as arr send its address of first element
    display(arr);
    ptr[0] = 5;
    display(arr);
    for (int j = 0; j < 5; j++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}