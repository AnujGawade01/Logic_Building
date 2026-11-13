#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    
    start = str;
    
    while(*str != '\0')
    {
        str++;
    }
    
    str--;

    while(start <= str)
    {
        printf("%s\n",str);
        str--;
    }

    printf("\n");
}

int main()
{
    char Arr[50];

    printf("Enter the string : \n");
    scanf("%[^\n]s",Arr);

    strrev(Arr);

    return 0;
}