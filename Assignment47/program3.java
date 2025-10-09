import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program3.java
// Description : Pattern printing
// Author : Adinath Santosh Pawar
// Date : 20/8/25           
// 
///////////////////////////////////////////////////////////////////

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = iCol; j >= 1; j--)
            {
                System.out.print(j + " ");
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

       System.out.print("Enter the number of rows ");
       int iRow = sobj.nextInt();

       System.out.print("Enter the number of columns ");
       int iCol = sobj.nextInt();
       pobj.Pattern(iRow,iCol);
    }
}