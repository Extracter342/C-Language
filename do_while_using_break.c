//timing of statement   

#include<stdio.h>
int main()
{
    int n;
    do {
        printf("enter number");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 2 >= 1) {
            break;
        }

    } while(1);
    printf("thankyou");

    return 0;
}