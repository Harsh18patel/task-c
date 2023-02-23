#include<stdio.h>
void main()
{
    int a,b,c;

    printf("number is a: ");
    scanf("%d",&a);
    printf("number is b: ");
    scanf("%d",&b);
    printf("number is c: ");
    scanf("%d",&c);


    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater..");
        }
        else
        {
            printf("c is greater..");
        }
    }
    else
    {
        if(b>c)
        {
            printf(" b is greater..");
        }
        else
        {
            printf("c is greater..");
        }
    }

}
