#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);         // %[^'\n']s  RegEx (Regular Expression) , ^  negates , \n tells to take input till enter 

    printf("Entered string is : %s\n",Arr);

    return 0;
}