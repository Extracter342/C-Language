#include<stdio.h>
int main()
{
    int i,n,table=0;
    printf("enter the num of table");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        table=n*i;
        printf("%d\n",table);
    }
    
    return 0;
}