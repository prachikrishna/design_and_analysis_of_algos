#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int pk[5000];





void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

     while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {

        int m = l + (r - l) / 2;


        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);


    }
}









void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    clock_t t;
    //clock_t t1;


    int count=5000;
    int arr_size = count;
    int arr[arr_size];
    printf("The random numbers are:\n ");
            for (int i = 0; i < count; i++)
                {
                    arr[i] = rand() % 5000;
                    printf("%d ", arr[i]);
                }

    printf("\n\n----------------------------------------WORST CASE---------------------------------------------------------------\n\n");

    t = clock();
    mergeSort(arr, 0, arr_size - 1);
    t = clock() - t;


    printf("\nSorted array is \n");
    printArray(arr, arr_size);

    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("fun() with random elements took %f seconds to execute \n", time_taken);



      //printf("\n\n-----------------------------------AVERAGE CASE--------------------------------------------------------------------\n\n");
    //selectionSort(arr, arr_size);
    //printArray1(arr, arr_size);



    //t1 = clock();
    //mergeSort(pk, 0, arr_size - 1);
    //t1 = clock() - t1;


    //printf("\nSorted array is \n");
    //printArray(pk, arr_size);

    //double time_taken1 = ((double)t1)/CLOCKS_PER_SEC; // in seconds

    //printf("fun() with elements sorted in descending order took %f seconds to execute \n", time_taken1);




    return 0;
}
