#include <stdio.h>

int binarySearch(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int m = start + (end - start) / 2;

        if (arr[m] == x) // if x is present at mid only
            return m;

        if (arr[m] < x) // If x greater, ignoring the left half of the array
            start = m + 1;

        else
        { // If x is smaller, ignoring the right half of the array
            end = m - 1;
        }
    }
    return -1;
}

int main()
{
    int s;
    printf("Enter the size of the array:\n");
    scanf("%d", &s);
    int arr[s]; // sorted array has to be provided
    printf("Enter the elements:\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]); // calculating the total elements in the array
    int x;                                // search element
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
    {
        printf("Element is not present in this array\n");
    }
    else
    {
        printf("Element is present at index %d\n", result);
    }
    return 0;
}
