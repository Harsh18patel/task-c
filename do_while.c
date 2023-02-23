#include<stdio.h>
void main()
{
    int pizza_price=100;
    int coffee_price=150;
    int total=0;
    int n;
    char ch;

do
{
    printf("1. pizza: ");
    printf("\n2. coffee: ");

    printf("\nchoose any of above: ");
    scanf("%d",&n);

    if(n==1)
    
    {
        printf("if you order pizza: ");
        printf("\nprice is: %d",pizza_price);
        total=total+pizza_price;
        printf("\ntotal bill is: %d",total);
    }
    else if(n==2)
    {
        printf("if you order coffee: ");
        printf("\nprice is: %d",coffee_price);
        total=total+coffee_price;
        printf("\ntotal bill is: %d",total);
    }
    else
    {
        printf("invalid: ");
    }
    printf("\ndo you want continue? (y/n)");
    scanf("\n%c",&ch);
}

while(ch=='y');
}