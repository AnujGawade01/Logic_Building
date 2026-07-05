import java.util.*;

class program140
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {10,20,30,40,50};

        // Bad programming practice
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)        // works it creates use and throw variable
        {
            System.out.println(Arr[iCnt]);
        }

        System.out.println(iCnt);                           // it will generate error as the life/scope of iCnt ended on line 14
    }
}