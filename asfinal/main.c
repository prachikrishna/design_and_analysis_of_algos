#include <stdio.h>
int temp;
char temp1;



void ascending_sort(int a[], int n, int b[], char c[]) {

     int i, j, min_idx;


    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (b[j] < b[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        temp=b[min_idx];
        b[min_idx]=b[i];
        b[i]=temp;

        temp=a[min_idx];
                a[min_idx]=a[i];
                a[i]=temp;

                temp1=c[min_idx];
                c[min_idx]=c[i];
                c[i]=temp1;

    }
   // for(i=0;i<n;i++){
       // printf("activities sorted in ascending order");
        //printf("%c %d %d\n",c[i],a[i],b[i]);
    //}

}


void printMaxActivities(int s[], int f[], int n,char act_name[],int user)
{

    int count=1,i, j;

    printf("Selected activity set: ");
    i = 0;
    //printf("%c ", act_name[i]);
    int my_choice=user;
    printf("%c ", act_name[my_choice]);
    int pk=user+1;


    for (j = pk; j < n; j++) {
        //if(j!=user)
        //{
        if (s[j] >= f[user]) {
            printf("%c ", act_name[j]);

            count++;
            i = j;
        }
        //}
    }
    printf("\nmax no of selected activities are:%d",count);
}


int main()
{
    int n;
    printf("enter max number of activities:");
    scanf("%d",&n);
    int s[n],f[n];
    char act_name[n];
    printf("enter the name of activities with their start and finish time:\n");


    for(int i = 0; i < n; ++i) {

            //printf("(");
            scanf("%s %d %d",&act_name[i],&s[i],&f[i]);


        //printf("Enter activity %d start time: ", i);
        //scanf("%d", &s[i]);
        //printf("Enter activity %d end time: ", i);
        //scanf("%d", &f[i]);
    }

     ascending_sort(s,n,f,act_name);
    char ch;
    printf("enter users choice:");
    scanf("%s",&ch);
    int user;
    for(int i=0;i<n;i++)
    {
        if(ch==act_name[i])
        {
            user=i;
        }
    }

    printMaxActivities(s, f, n,act_name,user);
    return 0;
}
