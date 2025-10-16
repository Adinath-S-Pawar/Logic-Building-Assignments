import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program1.java
// Description : swap consecutive rows of matrix
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

    public void SwapRows(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i = i+2)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i < iRow-1)
                {
                    int temp = Arr[i][j];
                    Arr[i][j] = Arr[i+1][j];
                    Arr[i+1][j] = temp;
                }
            }
        }
        
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

        mobj.SwapRows(iRow,iCol);
        mobj.Display();
    }
}