#include <stdio.h>
#include <stdlib.h>

void main()
{

    int arr1[100];
    int i, mx, mn, n,ind1,secmx,ind2,max_diff;


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
    secmx=arr1[0];

    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
     {
            mx = arr1[i];
            ind1=i;
        }



    }
    for(i=1; i<n; i++)
    {
        if(arr1[i]>secmx && arr1[i]< mx)
        {
            secmx=arr1[i];
            ind2=i;
        }
    }
 max_diff=ind1-ind2;


    printf("Maximum element is : %d\n", mx);
    printf("index of max element:%d\n",ind1);
     printf(" secondmax element:%d\n",secmx);
      printf(" index of secondmax element:%d\n",ind2);
       printf(" max index diff is :%d\n",max_diff);

}




