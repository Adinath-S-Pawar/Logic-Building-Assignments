import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program3.java
// Description : reverse content of each column of matrix
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

    public void ReverseColumn(int iRow,int iCol)
    {
        int i = 0, j = 0;
        for(i = 0; i < Arr.length / 2; i++)
        {
            for(j = 0; j < (Arr[i].length); j++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[iRow-i-1][j];
                Arr[iRow-i-1][j] = temp;
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

}
class program3
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
        mobj.ReverseColumn(iRow,iCol);
        mobj.Display();
    }
}