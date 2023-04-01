#include<stdio.h>
int main ()
{
    int x;
    printf("enter the num");
    scanf("%d",&x);
    if(x%2==0)
    {
printf("number is even%d\n",x);

}
else 
{
    printf("number is odd\n");
}
return 0;
}