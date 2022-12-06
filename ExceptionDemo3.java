import java.util.*;

class ExceptionDemo2
{
    public static void main(String a[])
    {
        String s1 = "Marvellous";

        String s2 = null;   //C,C++ : NULL

        System.out.println("Data of s1 is :" +s1);
        System.out.println("Data of s2 is :" +s2);

        System.out.println("length of s1 is :" +s1.length());
        System.out.println("length of s2 is :" +s2.length());// java.lang.NullPointerException: Cannot invoke "String.length()" 
                                                             //because "<local2>" is null

    }
}