#include<stdio.h>
int main()
{
    int i =0,n,table = 0;
    printf("enter the no ");
    scanf("%d",&n);
    while(i<=10)
    {
        
       i++;
        table = i*n;
        printf("%d\n",table);
    }
    
}