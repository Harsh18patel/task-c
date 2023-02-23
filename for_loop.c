#include<stdio.h>
void main()
{
    int a,i;
    printf("a is:");
    scanf("%d",&a);



    printf("even num is : ");
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    
    printf("odd num is : ");
    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    
}