#include<stdio.h>

void ReverseDisplay(char *str)
{
    printf("%s\n",str);
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^\n]s",Arr);

    ReverseDisplay(Arr);

    return 0;
}