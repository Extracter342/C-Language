#include<stdio.h>
int main()
{
 int i;
 int x;
 for(i=1; i<6; i++)
 {
      for(x=1; x<=i; x++)
    {  
      printf("%d",x);
    }
        printf("\n"); 
 }
 return 0;
}