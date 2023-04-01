#include<stdio.h>
int main()
{
 int p,q,r;
 printf("enter the amount of rs");
 scanf("%d",&r);
 printf("enter the no of intrest");
 scanf("%d",&q);
 printf("enter the time");
 scanf("%d",&p);
 //formula is p*q*r\100 how to type
 {
float si=(p*q*(r%100));
 printf("total amount is %f",si);
 }
 return 0;
}