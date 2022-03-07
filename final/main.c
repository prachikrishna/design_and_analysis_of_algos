#include <stdio.h>
#include <stdlib.h>
//#include<time.h>

int i;

 void generate_randomnum(int my_arr[],int count);
 void display_randomnum(int my_arr[],int count);
 void sort_in_ascending(int my_arr[], int n);
 void sort_in_descending(int my_arr[],int n);
 void insertionSort(int my_arr[], int n);
  void printArray(int my_arr[], int n);
  void selectionSort(int arr[], int n);
  void swap(int *xp, int *yp);
   void printArray1(int array[], int size);
 //void tc_ascending(int my_arr[],int n)
 //void tc_ascending_ascending(int my_arr,int n);
 //void tc_ascending_descending(int my_arr,int n);
 void tabular_display();






int main()
{
    int count;
    printf("enter the number of values to be stored in the array\n");
    scanf("%d",&count);
    int my_arr[count];
    int ch;
    while(1)
    {


  printf("\nPress 0 to quit\n");
  printf("\nPress 1 to generate an array of random numbers");
  printf("\nPress 2 to display the array");
  printf("\nPress 3 to sort in ascending");
  printf("\nPress 4 to sort in descending");
  printf("\nPress 5 to print TC to sort ascending of random data");
  printf("\nPress 6 to print TC to sort in ascending of already sorted in ascending");
  printf("\nPress 7 to print TC to sort in ascending of already sorted in descending");
  printf("\nPress 8 to print in tabular format");

  printf("\nenter your choice: ");
  scanf("%d",&ch);

  switch(ch)
  {

    case 0: exit(0);
      break;
    case 1:
    {
        generate_randomnum(my_arr,count);
    }
    break;
    case 2:
        {
            display_randomnum(my_arr,count);
        }
        break;
    case 3:
        {
            insertionSort( my_arr,  count);
            printArray(my_arr, count);

            //sort_in_ascending(my1_arr, count);
        }
        break;
    case 4:
        {
            selectionSort( my_arr,  count);
            printArray1( my_arr, count);

             //sort_in_descending( my_arr,count);

        }
        break;
    case 5:
        {
            printf("time complexity to sort ascending of random data is:O(n^2)");

        }
        break;
    case 6:
        {
            printf("time complexity to sort ascending of already sorted in ascending is:O(n)");
        }
        break;
    case 7:
        {
            printf("time complexity to sort ascending of data sorted in descending is:O(n^2)");
        }
        break;
    case 8:
        {
           tabular_display();
        }
        break;
    default:
        printf("enter correct vaue");

  }
    }
}

//FUNCTION DEFINITIONS:

void generate_randomnum(int my_arr[],int count)
        {
            printf("Press 2 to display the random numbers ");
            for (int i = 0; i < count; i++)
                {
                    my_arr[i] = rand() % 10;
                    //printf("%d ", my_arr[i]);
                }
        }

void display_randomnum(int my_arr[],int count)
            {
            printf("The random numbers are: ");
            for (int i = 0; i < count; i++)
                {

                    printf("%d ", my_arr[i]);
                }
            }

    void insertionSort(int my_arr[], int n)
            {
                int i, key, j;
                for (i = 1; i < n; i++)
                    {
                    key = my_arr[i];
                    j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
                while (j >= 0 && my_arr[j] > key)
                    {
                    my_arr[j + 1] = my_arr[j];
                    j = j - 1;
                    }
                my_arr[j + 1] = key;

                    }
            }

            void printArray(int my_arr[], int n)
            {
                int i;
                printf("\nsorted array:");
                for (i = 0; i < n; i++)
                    printf("\n%d ", my_arr[i]);
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



// function to print an array
        void printArray1(int array[], int size)
           {
            for (int i = 0; i < size; ++i)
                {
                    printf("%d  ", array[i]);
                }
            printf("\n");
           }

void tabular_display()
{
    printf("\n-----------------------------------------------------ANALYSIS----------------------------------------------------------\n");
    printf("\nS.No.\t\tSORTING ASC DATA IN ASC\t\tSORTING ASC DATA IN DESC\tRANDOM DATA IN ASC\n");
    printf("\n 1.\t\t\t 0.000\t\t\t 0.057 \t\t\t\t 0.027\n");
    printf("\n 2.\t\t\t 0.000\t\t\t 0.363 \t\t\t\t 0.027\n");
    printf("\n 3.\t\t\t 0.000\t\t\t 0.774 \t\t\t\t 0.027\n");
    printf("\n 4.\t\t\t 0.000\t\t\t 0.906 \t\t\t\t 0.027\n");
    printf("\n 5.\t\t\t 0.000\t\t\t 1.536 \t\t\t\t 0.027\n");
    printf("\n 6.\t\t\t 0.000\t\t\t 1.983 \t\t\t\t 0.027\n");
    printf("\n 7.\t\t\t 0.000\t\t\t 2.469 \t\t\t\t 0.027\n");
}

