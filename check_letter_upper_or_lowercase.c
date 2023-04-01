#include<stdio.h>
int main()
{
    char ch;
    printf("enter the letter");
    scanf("%c",&ch);
    if(ch >='a'&& ch<='z')
    {
        printf("lower case");
    }
    else if (ch >='A'&& ch <='Z')
    {
        printf("upper case");
    } 
    else
    {
        printf("invalid");
    }
    return 0;
