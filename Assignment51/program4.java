import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program4.java
// Description : Trace and normal of matrix
// Author : Adinath Santosh Pawar
// Date : 21/8/25           
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

    public void Display()
    {
        System.out.println("The elements of matrix are ");

        int i = 0, j = 0;
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    public int Trace(int iRow, int iCol)
    {
        if(iRow != iCol)
        {
            System.out.println("Matrix should be squared to find trace");
            return -1;
        }
        int iTrace = 0,i=0,j=0;
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                    iTrace = iTrace + Arr[i][j];
                }
            }
        }

        return iTrace;
    }

    public int Normal(int iRow, int iCol)
    {
        int iSum = 0,i=0,j=0;
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }

        return (int)Math.sqrt(iSum);
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

        iRet = mobj.Trace(iRow,iCol);
        if(iRet != -1)
        {
            System.out.println("Trace of matrix is "+iRet);
        }

        iRet = mobj.Normal(iRow,iCol);    
        System.out.println("Normal of matrix is "+iRet);
        
        
    }
}