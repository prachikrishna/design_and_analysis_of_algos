#include <stdio.h>
#include <stdlib.h>


 int consecutiveinteger(int m, int n)
        {
            //if (m == 0 || n == 0) { return m; }
            int t;
            if (m < n)
            {
                t = m;
            }
            else
            {
                t = n;
            }
            while (t != 0)
            {
                if (m % t == 0)
                {
                    if (n % t == 0)
                    {
                        return t;
                    }
                    t = t - 1;
                }
                else t = t-1;
            }
            //return m;
        }


        int main()
        {
            int m,n,t;
            printf("enter value of m and n:");
            scanf("%d %d",&m,&n);



            printf("The GCD by Consecutive integer is: %d ", consecutiveinteger(m, n));

        }


