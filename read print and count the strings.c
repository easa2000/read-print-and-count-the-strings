// write a program to read and print the text until * is encounted, also count characters

#include<stdio.h>
void main()
{
    char str[100];
    int i=0;
    printf("\n Enter * to end");
    printf("\n Enter the text: ");
    scanf("%c",&str[i]);
    while(str[i] != '*')
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i] = '\0';
    printf("\n the text is: ");
    i=0;
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n The count of character is %d",i);
}
