#include <stdio.h>




void main()
{
    int arr1[100];
    int i, mx, mn, n,ind1;


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


    mx = arr1[0];
    mn = arr1[0];

    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
     {
            mx = arr1[i];
            ind1=i;
        }



    }
    printf("Maximum element is : %d\n", mx);
    printf("index of max element:%d\n",ind1);
}

