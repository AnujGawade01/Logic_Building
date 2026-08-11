#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%s",Arr); // as the words after the first word is not stored i.e after first space

    printf("Entered string is : %s\n",Arr);

    return 0;
}