#include<stdio.h>

//Call by address
void Swap(int *Ptr1, int *Ptr2)
{
    int temp = 0;

    temp = *Ptr1;
    *Ptr1 = *Ptr2;
    *Ptr2 = temp;
}

int main()
{
    int i = 11;
    int j = 21;
    
    Swap(&i,&j);

    printf("i:%d\n",i);
    printf("j:%d\n",j);

    return 0;
}