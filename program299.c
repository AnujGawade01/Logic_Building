#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    
    start = str;
    
    while(*str != '\0')
    {
        str++;
    }
    
    str--;

    end = str;

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("\n");
}

int main()
{
    char Arr[50];

    printf("Enter the string : \n");
    scanf("%[^\n]s",Arr);

    strrevX(Arr);

    printf("Updater string : %s\n",Arr);

    return 0;
}