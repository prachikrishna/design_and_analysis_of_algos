#include <stdio.h>
#include<stdlib.h>
int arr[10];

// A iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }


    return -1;
}

int main(void)
{
    int count=10;
    printf("The random numbers are:\n ");
            for (int i = 0; i < count; i++)
                {
                    arr[i] = rand() % 10;
                    printf("%d ", arr[i]);
                }

    int n = count;
    int x ;

    printf("\n choose x from the list of generated random numbers: ");
    scanf("%d",&x);

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d",  result);



    return 0;
}
