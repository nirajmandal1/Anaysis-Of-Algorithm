#include <stdio.h>

int linearSearch(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;   // Return index if found
        }
    }
    return -1;   // Return -1 if not found
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, result;

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, size, key);

    if (result == -1)
    {
        printf("Element Not Found\n");
    }
    else
    {
        printf("Element Found at index %d\n", result);
        printf("Position = %d\n", result + 1);
    }

    return 0;
}