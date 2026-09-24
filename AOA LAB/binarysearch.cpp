#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, result;

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, size, key);

    if (result != -1)
    {
        printf("Element Found at index %d\n", result);
        printf("Position = %d\n", result + 1);
    }
    else
    {
        printf("Element Not Found\n");
    }

    return 0;
}