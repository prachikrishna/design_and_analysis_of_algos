#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[10],pk[10],n,result1;//result2,result3;

// A iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;


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

 void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}



 void printArray1(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
    {
        pk[i]=arr[i];
        printf("%d ", arr[i]);
    }

    printf("\n");
}


int main(void)
{
    clock_t start, end;
     double cpu_time_used;

    int count=10;
    int n = count;
    printf("The random numbers are:\n ");
            for (int i = 0; i < count; i++)
                {
                    arr[i] = rand() % 10;
                    printf("%d ", arr[i]);
                }
    insertionSort(arr, n);

    printf("\n\n-------------------------------------ARRAY  IS AS FOLLOWS:---------------------------------------\n\n");

    printArray1(arr, n);


    int x ;

    printf("\n choose x from the list of  random numbers: ");
    scanf("%d",&x);

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d",  result);

    printf("\n choose x from the list of  random numbers: ");
    scanf("%d",&x);


     start = clock();
    int result1 = binarySearch(arr, 0, n - 1, x);
    end = clock();
    (result1 == -1) ? printf("Element is not present in array") : printf("Element is present at index %d",  result1);

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nfun() took %f seconds to execute \n", cpu_time_used);



    return 0;
}
