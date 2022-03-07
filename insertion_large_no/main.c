#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[50000],pk[50000];

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

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
         //pk[i]=arr[i];
         printf("%d ", arr[i]);
    }

    printf("\n");
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, max_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        max_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] > arr[max_idx])
            max_idx = j;
            swap(&arr[max_idx], &arr[i]);
    }
}

/* Function to print an array */
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





/* Driver program to test insertion sort */
int main()
{
    int count=50000;
    printf("The random numbers are:\n ");
            for (int i = 0; i < count; i++)
                {
                    arr[i] = rand() % 50000;
                    printf("%d ", arr[i]);
                }



    int n = count;


    clock_t start,end,start1,end1;
    //start = clock();




    //insertionSort(arr, n);
    //end = clock();
    //double time_taken = ((double)(end-start))/CLOCKS_PER_SEC; // in seconds

    //printf("\n\n-------------------------------------ARRAY IN SORTED ORDER IS AS FOLLOWS:---------------------------------------\n\n");
    selectionSort(arr,n);
    printf("\n\n-------------------------------------ARRAY  SORTED IN DESCENDING ORDER IS AS FOLLOWS:--------------------------------\n\n");
    printArray1(arr, n);
    //printArray(arr, n);
    start = clock();
    insertionSort(pk, n);
    end = clock();
    double time_taken = ((double)(end-start))/CLOCKS_PER_SEC; // in seconds
    printf("\n\n-------------------------------ARRAY SORTED IN ASCENDING AFTER SORTING IN DESCENDING ORDER IS AS FOLLOWS-----------------\n\n");
    printArray(pk, n);
    printf("\nfun() took %f seconds to execute \n", time_taken);

   /* printf("---------------------------------------------------------------------------------------------------------------------------");
     start1 = clock();
    insertionSort(pk, n);
     end1 = clock();
     double time_taken1 = ((double)(end1-start1))/CLOCKS_PER_SEC; // in seconds
    printArray(pk, n);
    printf("\nfun1() took %f seconds to execute \n", time_taken1); */

    return 0;
}
