import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program4.java
// Description : Display sum of columns of matrix
// Author : Adinath Santosh Pawar
// Date : 2/8/25
// 
///////////////////////////////////////////////////////////////////

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }
        
    public void Accept()
    {
        System.out.println("Enter the elements of matrix ");

        Scanner sobj = new Scanner(System.in);

        int i = 0, j = 0;
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void AddColumn(int iRow, int iCol)
    {
        int i = 0, j = 0;
        int[] SumCol = new int[iCol];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                SumCol[j] =SumCol[j] + Arr[i][j];
            }
        }

        for (j = 0; j < iCol; j++) 
        {
            System.out.println("Sum of column " + j + ": " + SumCol[j]);
        }
    }

}
class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns :");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.AddColumn(iRow,iCol);
    }
}