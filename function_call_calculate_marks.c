#include<stdio.h>
int calculateper(int sanskrit,int maths,int english);
int main()
{
int maths =30;
int english = 80;
int sanskrit = 60;
printf("percentage : %d",calculateper(maths,sanskrit,english));
return 0;
}

//call function
int calculateper(int sanskrit,int english,int maths)
{
    return((maths,sanskrit,english)/3);
}