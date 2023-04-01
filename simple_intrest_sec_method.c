#include<stdio.h>
int main()
{
    float p,n,r,s;
    printf("enter the value of p ,n ,r");
    scanf("%f%f%f",&p,&n,&r);
    s=p*n+r/100;
    printf("%f",s);
    return 0;
}