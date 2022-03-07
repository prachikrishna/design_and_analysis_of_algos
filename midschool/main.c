#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fnumber,snumber,i,j;


    printf("Enter the first number\n");
    scanf("%d",&fnumber);
    int p[fnumber+1];


    int primes[fnumber+1];

    //populating array with naturals numbers
    for(i = 2; i<=fnumber; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= fnumber)
    {
        if (primes[i] != 0)
        {
            for(j=2; j<fnumber; j++)
            {
                if (primes[i]*j > fnumber)
                    break;
                else
                    // Instead of deleteing , making elemnets 0
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }

    for(i = 2; i<=fnumber; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0 && fnumber%primes[i]==0)
        {


            p[i]=primes[i];
            printf("%d\n",p[i]);
        }
    }

    //second number

    printf("Enter the second number\n");
    scanf("%d",&snumber);
     int store1[snumber+1];

    int primes1[snumber+1];

    //populating array with naturals numbers
    for(i = 2; i<=snumber; i++)
        primes1[i] = i;

    i = 2;
    while ((i*i) <= snumber)
    {
        if (primes1[i] != 0)
        {
            for(j=2; j<snumber; j++)
            {
                if (primes1[i]*j > snumber)
                    break;
                else
                    // Instead of deleteing , making elemnets 0
                    primes1[primes1[i]*j]=0;
            }
        }
        i++;
    }

    for(i = 2; i<=snumber; i++)
    {
        //If number is not 0 then it is prime
        if (primes1[i]!=0 && snumber%primes1[i]==0)
        {
            store1[i]=primes1[i];
            printf("%d\n",store1[i]);


        }
    }

    int s1 = sizeof(p) / sizeof(p[0]);
     int s2 = sizeof(store1) / sizeof(store1[0]);
     printf("size of s1:%d",s1);

//return 0;
//}


    //printIntersection(p, store1, fnumber, snumber);
    printCommon(p,fnumber,store1,snumber);



    return 0;
}

/*int printIntersection(int p[], int store1[], int fnumber, int snumber)
    {
   int i=2,j=2;
   while (i < fnumber && j < snumber)
        {
        if (p[i] < store1[j])
            i++;
        else if (store1[j] < p[i])
            j++;
        else /* if arr1[i] == arr2[j] */
       /* {
            printf("\ncommon elements: %d", store1[j++]);
            i++;
        }
        }
    } */

    int printCommon(int p[], int fnumber, int store1[],int snumber)
     {
    int pk[5];
   int i,j;
   int c=0;


   for(i = 2; i < fnumber ;i++)
    {

      for(j = 2; j < snumber ;j++)
        {

        if(p[i] == store1[j])
            {

            pk[i]=p[i];
           printf("\n Common elements : %d", p[i]);
           c++;



          }

       }
    }
    if(c==0)
    {
        printf("no common elements found");

    }
}




   /* int result=1;
    for(i=2;i<5;i++)
    {
        result=result*pk[i];
    }
    printf("\ngcd using mid school method is:%d",result);
}
*/



