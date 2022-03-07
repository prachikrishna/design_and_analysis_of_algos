#include <stdio.h>
#include <stdlib.h>

int main()
{
            int m,n,t;
            printf("Enter value of m and n");
            scanf("%d %d",&m,&n);






            //if (m == 0 || n == 0) { return m; }
            if (m < n)
            {
                t = m;
            }
            else
            {
                t = n;
            }
            while (t != 1)
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
            return m;

        }


