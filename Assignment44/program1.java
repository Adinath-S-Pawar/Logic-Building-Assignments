import java.util.*;
/////////////////////////////////////////////////////////////////// 
//
// File name : program1.java
// Description : Add diagonal elements of matrix
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

    public int AddDiagonal(int iRow, int iCol)
    {
        int i = 0, j = 0,iSum = 0;

        if(iRow != iCol)
        {
            return -1;
        }

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }

}
class program1
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

        iRet = mobj.AddDiagonal(iRow,iCol);
        System.out.println(iRet);
    }
}