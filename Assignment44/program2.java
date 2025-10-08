import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program2.java
// Description : Count frequency of given number
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

    public int Frequency(int iNo)
    {
        int i = 0, j = 0,iCnt = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
    }

}
class program2
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

        System.out.println("Enter the element :");
        int iNo = sobj.nextInt();

        iRet = mobj.Frequency(iNo);
        System.out.println(iRet);
    }
}