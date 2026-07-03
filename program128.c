#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;    // Bad programming
        }
    }

    return false;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *Brr = NULL;
    bool bRet = false;

    printf("Enter the size of array / number of elements : \n");
    scanf("%d", &iLength);

    Brr = (int *) malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    bRet = LinearSearch(Brr, iLength);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is absent\n");
    }

    free(Brr);

    return 0;
}