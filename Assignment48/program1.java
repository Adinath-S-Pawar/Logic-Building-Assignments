import java.util.*;

/////////////////////////////////////////////////////////////////// 
//
// File name : program1.java
// Description : Pattern printing
// Author : Adinath Santosh Pawar
// Date : 20/8/25           
// 
///////////////////////////////////////////////////////////////////

class Pattern
{
    public void Pattern(String str)
    {
        for(int i = 0; i < str.length(); i++)
        {
            System.out.print(str.charAt(i)+" ");
        }
    }
}

class program1
{
    public static void main(String A[])
    {
       Pattern pobj = new Pattern();
       Scanner sobj = new Scanner(System.in);

       System.out.print("Enter the string ");
       String str = sobj.nextLine();

       pobj.Pattern(str);
    }
}