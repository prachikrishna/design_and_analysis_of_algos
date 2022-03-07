#include <stdio.h>

//int select(char ch,int n,char act_name[n])
//{
   // for(int i=0;i<n;i++)
    //{
        //if(ch==act_name[i])
        //{
          //  return i;
        //}
    //}
//}


void ascending_sort(int a[], int n, int b[], char c[]) {
    for(int i = 0; i < n-1; ++i) {
        for(int j = 0; j < n-1-i; ++j) {
            if(a[j] > a[j+1]) {
                a[j] += a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
                b[j] += b[j+1];
                b[j+1] = b[j] - b[j+1];
                b[j] = b[j] - b[j+1];
                c[j] += c[j+1];
                c[j+1] = c[j] - c[j+1];
                c[j] = c[j] - c[j+1];
            }
        }
        printf("%s %d %d",c[i],a[i],b[i]);
    }

}


void printMaxActivities(int s[], int f[], int n,char act_name[],int user)
{

    int count,i, j;

    printf("Following activities are selected n");
    i = user;
    printf("%d ", i);


    for (j = 0; j < n; j++) {
        if(j!=user)
        {
        if (s[j] >= f[i]) {
            printf("%d ", j);
            i = j;
            count++;
        }
        }
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


    for(int i = 0; i < n; ++i) {
            printf("enter name:");
            scanf("%s",&act_name[i]);
        printf("Enter activity %d start time: ", i);
        scanf("%d", &s[i]);
        printf("Enter activity %d end time: ", i);
        scanf("%d", &f[i]);
    }


    //for(int i=0;i<n;i++)
    //{

        //scanf("%c %d %d\n",&act_name[i],&s[i],&f[i]);

    //}
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
    printf("%d",user);
    //int s[] = { 1, 3, 0, 5, 8, 5 };
    //int f[] = { 2, 4, 6, 7, 9, 9 };
    //int n = sizeof(s) / sizeof(s[0]);
    printMaxActivities(s, f, n,act_name,user);
    return 0;
}
