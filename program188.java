// input : 11
// output : * * * # # # * * * # #

import java.util.*;

class program188

{   
    public static void Display(int iNo)
    {
        int iCnt = 0, jCnt = 0;
        
        iCnt = 1;

        while(iCnt <= iNo)
        {
            for(jCnt = 6; jCnt > 0; jCnt--)
            {
                if(iCnt > iNo)
                {
                    break;
                }

                if(jCnt > 3)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("#\t");
                }
                iCnt++;
            }
        }
    } 


    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number of elements : ");
        iValue = sobj.nextInt();

        Display(iValue);
        
        sobj.close();   
    }
}