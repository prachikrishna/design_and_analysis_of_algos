#include <stdio.h>
#include<time.h>
int mx,mn,i;

void main()
{
    clock_t t;
    int arr1[100];
    int i, mx, mn, n;


       printf("\n\nFind maximum and minimum element in an array :\n");
       printf("--------------------------------------------------\n");

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

	    t = clock();
    minmax(arr1,n);

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("fun() took %f seconds to execute \n", time_taken);
}


void minmax(int arr1[],int n)
{



    mx = arr1[0];
    mn = arr1[0];

    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }
if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}
