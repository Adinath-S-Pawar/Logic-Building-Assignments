import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program5.java
// Description : Pattern printing
// Author : Adinath Santosh Pawar
// Date : 20/8/25
// 
///////////////////////////////////////////////////////////////////

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int iNo = 1;
        for(int i = iRow; i >= 1; i--)
        {
            for(int j = 1; j <= iCol; j++)
            {
                System.out.print(iNo + " "); 
                iNo++; 
            }
            System.out.println();
        }
    }
}
class program5
{
    public static void main(String A[])
    {
       Pattern pobj = new Pattern();
       Scanner sobj = new Scanner(System.in);

       System.out.print("Enter the number of rows ");
       int iRow = sobj.nextInt();

       System.out.print("Enter the number of columns ");
       int iCol = sobj.nextInt();
       pobj.Pattern(iRow,iCol);
    }
}