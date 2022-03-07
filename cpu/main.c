#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
  printf("Press 0 to quit\n");
  printf("Press 1 to generate an array of random numbers");
  printf("Press 2 to display the array");
  printf("Press 3 to sort in ascending");
  printf("Press 4 to sort in descending");
  printf("Press 5 to print TC to sort ascending of random data");
  printf("Press 6 to print TC to sort in ascending of already sorted in ascending");
  printf("Press 7 to print TC to sort in ascending of already sorted in descending");
  printf("Press 8 to print in tabular format");

  printf("enter your choice");
  scanf("%d",&ch);

  switch(ch)
  {

    case 0:
      break;
    case 1:
    {
        void generate_randomnum(int my_arr[],int count)
        {
            printf("The random numbers are: ");
            for (int i = 0; i < count; i++)
                {
                    my_arr[i] = rand() % 10;
                    //printf("%d ", my_arr[i]);
                }
        }

    }
    break;
    case 2:
        {
            void display_randomnum(int my_arr[],int count)
            {
            printf("The random numbers are: ");
            for (int i = 0; i < count; i++)
                {

                    printf("%d ", my_arr[i]);
                }
            }

        }
        break;
    case 3:
        {
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
        }
        break;
    case 4:
        {
            void swap(int *a, int *b)
            {
                int temp = *a;
                *a = *b;
                *b = temp;
            }



        void selectionSort(int array[], int size)
        {
            for (int step = 0; step < size - 1; step++)
                {
                    int min_idx = step;
                    for (int i = step + 1; i < size; i++)
                    {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
                    if (array[i] < array[min_idx])
                        min_idx = i;
                    }

    // put min at the correct position
                    swap(&array[min_idx], &array[step]);
                }
      }


// function to print an array
        void printArray(int array[], int size)
           {
            for (int i = 0; i < size; ++i)
                {
                    printf("%d  ", array[i]);
                }
            printf("\n");
           }
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

        }

  }
}
