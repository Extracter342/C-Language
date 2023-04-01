#include<stdio.h>
void indian();
int main()
{
    printf("enetr i for indian & f for french");
    char ch;
    scanf("%c",&ch);
    if(ch == 'i')
    {
        indian();
    }
    else
    {
        bonjur();
    }
    return 0;
}
 


void indian(){
    printf("indian");
}
void bonjur()
{
    printf("french");
}