#include<stdio.h>

void ReverseDisplay(char *str)
{
    char *start = NULL;
    start = str;
    
    while(*str != '\0')
    {
        str++;
    }

    //Issue as str current position is at \0

    while(start <= str)
    {
        printf("%c\n",*str);
        str--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^\n]s",Arr);

    ReverseDisplay(Arr);

    return 0;
}