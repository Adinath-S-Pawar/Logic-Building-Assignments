import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program4.java
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
            for(int j = 1; j <= iCol; j++)
            {
                if(j % 2 == 0)
                {
                    System.out.print("# ");
                }
                else
                {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }
}

class program4
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