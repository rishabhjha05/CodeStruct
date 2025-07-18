int solution(int arr[], int n)
{
    int j = 1;
    while (j < n)
    {
        if (arr[j] != arr[j - 1])
            return arr[j];
        j++;
    }
}
bool found(int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    if (sum / n == arr[0])
        return false;
    else
        return true;
}
int main()
{
    int n;

    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " element : ";
        cin >> arr[i];
    }
    if (!found(arr, n))
        cout << "There is no unique elemet found int the given array : ";
    else
        cout << "The first non repeating element in the given array is : " << solution(arr, n);
    return 0;
}
