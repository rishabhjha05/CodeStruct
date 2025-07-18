#include <stdio.h>
#include <limits.h>
void insertion_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int j = i;
        while (j >= 0 && arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j--;
        }
    }
}
void selection_sort(int arr2[], int size)
{
    for (int i = 0; i < size - 2; i++)
    {
        int min = INT_MAX, min_idx = -1;
        for (int j = i; j < size; j++)
        {
            if (min > arr2[j])
            {
                min = arr2[j];
                min_idx = j;
            }
        }
        int temp = arr2[i];
        arr2[i] = arr2[min_idx];
        arr2[min_idx] = temp;
    }
}
void buble_sort(int arr3[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr3[j] > arr3[j + 1])
            {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n], arr2[n], arr3[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
        arr3[i] = arr[i];
    }
    insertion_sort(arr, n);
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    selection_sort(arr2, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");

    buble_sort(arr3, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}