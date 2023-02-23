#include<stdio.h>
#include<string.h>
void main()
{
    char name[50];
    printf("\nname is: ");
    gets(name);
    puts(name);

    char name2[50];
    strcpy(name2,name);
    puts(name);

    strlen(name2);
    printf("\n%d",strlen(name2));

    strrev(name);
    puts(name);

    if(strcmp(name2,name)==0)
    {
        printf("same..");
    }
    else
    {
        printf("not same..");
    }
}
