#include<stdio.h>
#include<stdlib.h>
int search_min_max(int a[], int start, int end,int * min,int * max, int *c)
{
int min1, max1;
if(start == end)
{
*min = a[start];
*max = a[end];

}
else if(start == (end-1) )
{
if(a[start] > a[end])
{
*max = a[start];
*min = a[end];
}
else
{
*min = a[start];
*max = a[end];
}
*c += 1; //count of comparison increases by one because of only two values
}
else
{
int mid = (start + end)/2;
search_min_max(a, start, mid, min, max, c);
search_min_max(a, mid+1, end, &min1, &max1, c);
if(max1 > *max)
{
*max = max1;
}
*c += 2; //count of comparison increases by two because of only two pairs of values
if(*min > min1)
{
*min = min1;
}
}
}
int main()
{
int n=0, c, min, max, tmp,ch;
int *a=NULL; //pointer to array
while(1) //MENU
{
printf("\n 1. Input list \n 2. Find min-max \n 3.Exit \n Enter your choice: ");
scanf("%d",&ch);
switch (ch)
{
case 1: //This is done to free the already allocated memory (if any)
if(n)
free(a);
while(1)
{
printf("Enter size of array\n"); //Error handling if character or string entered in place of integer
if(scanf("%d",&tmp)!=1 || tmp <= 0)
{
char c;
while((c = getchar()) != EOF && c != '\n');
printf("Enter integers only\n");
}
else
break;
}

n=tmp;
a=(int*)malloc(n*sizeof(int)); //Dynamic memory allocation to array

printf("Enter the values\n"); //Error handling for array
for(int i=0;i<n;i++)
{
if(scanf("%d", &tmp) != 1)
{
char c;
while((c = getchar()) != EOF && c != '\n');
printf("\nEnter integers only!\n");
break;
}
else
{
a[i]=tmp;
}
}
break;
case 2:
if(n>0)
{
c=0;
search_min_max(a,0,n-1,&min,&max,&c); //Call to the function
printf("MAXIMUM:-%d\n,MINIMUM:-%d\n,COUNT:-%d\n\n",max,min,c);
}
else
{
printf("Please enter input first!!!!!\n");
free(a);
}
break;
case 3:
if(a!=NULL) //Free the dynamically allocated memory
free(a);
return 0;
}
}
return 0;
}
