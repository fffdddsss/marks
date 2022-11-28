#include<stdio.h>
int main()
{
    int number;
    printf("enter your number\n");
    scanf("%d",& number);
    switch(number/10)
    {
        case 10:
        case 9:
        printf("your gread is A");
        break;
        case 8:
        printf("your gread is B");
        break;
        case 7:
        printf("your gread is C");
        break;
        case 6:
        printf("your gread is D");
        break;
        default:
        printf("your are fail");
            }
            return 0;
}