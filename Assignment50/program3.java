import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program3.java
// Description : Pattern printing
// Author : Adinath Santosh Pawar
// Date : 21/8/25           
// 
///////////////////////////////////////////////////////////////////

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        if(iRow != iCol)
        {
            System.out.println("rows and column values should be same");
            return;
        }

        for(int i = 1; i <= iRow; i++)
        {
            for(int j = iCol; j >= 1; j--)  //reverse loop
            {
                if(i == 1 || i == iRow || j == iCol || j == 1 || i == j)
                {
                    System.out.print("* ");
                }
                else
                {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}

class program3
{
    public static void main(String A[])
    {
       Pattern pobj = new Pattern();
       Scanner sobj = new Scanner(System.in);
       int iRow,iCol = 0;

       System.out.print("Enter the number of rows ");
       iRow  = sobj.nextInt();

       System.out.print("Enter the number of columns ");
       iCol  = sobj.nextInt();

       pobj.Pattern(iRow,iCol);
    }
}