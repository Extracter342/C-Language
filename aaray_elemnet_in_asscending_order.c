#include<stdio.h>
int main()
{
int i,j,n,temp;
int num[50];
printf("how many numbers are in an array");
scanf("%d",&n);
printf("enter an array element");
for (i = 0;i<n;i++)
{
scanf("%d",&num[i]);
}
printf("unsorted elem");
for(i = 0;i<n;i++)
{
    printf(" %d ",num[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(num[i]<num[j])
        {
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
        }
    }
}
    printf("sorted array");
    for(i=0;i<=n;i++)
    {
        printf(" %d ",num[i]);
    }
    return 0; 
}