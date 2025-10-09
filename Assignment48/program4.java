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
    public void Pattern(String str)
    {
        for(int i = 0; i < str.length(); i++)
        {
            for(int j = 0; j < str.length(); j++)
            {
                if(i + j < str.length())
                {
                    System.out.print(str.charAt(j) + " ");
                }
            }
            System.out.println();
        }

        for(int i = 1; i < str.length(); i++)
        {
            for(int j = 0; j < str.length(); j++)
            {
                if(i >= j )
                {
                    System.out.print(str.charAt(j) + " ");
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

       System.out.print("Enter the string ");
       String str = sobj.nextLine();

       pobj.Pattern(str);
    }
}