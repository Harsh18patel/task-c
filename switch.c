#include<stdio.h>
void main()
{
    int a,b, n;

    printf("press 1 for addition:");
    printf("\npress 2 for substraction:");
    printf("\npress 3 for multiplication");
    printf("\npress 4 for division");

    printf("\nselecte number: ");
    scanf("%d",&n);
    printf(" value of a:");
    scanf("%d",&a);

    printf("value of b:");
    scanf("%d",&b);

    switch(n)
    {
        case 1:
        printf("addition is %d",a+b);
        break;

        case 2:
        printf("substraction is %d",a-b);
        break;

        case 3:
        printf("multiplication is %d",a*b);
        break;

        case 4:
        printf("division is %f",(float)a/b);
        break;

        default:
        printf("invalid output");
        break;
    }
}