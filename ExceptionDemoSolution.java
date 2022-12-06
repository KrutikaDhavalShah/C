import java.util.*;

class ExceptionDemoSolution
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 =0, iNo2 = 0, iAns = 0;
        System.out.println("Enter first number");
        iNo1 = sobj.nextInt();
        System.out.println("Enter second number");
        iNo2 = sobj.nextInt();
        try
        {
            System.out.println("Inside try block");
            iAns = iNo1 / iNo2;
            System.out.println("Division is : " + iAns);
        }
       catch(ArithmeticException obj)      // obj is reference which will refer to try catch object
        {
           System.out.println("Inside catch1 block");
           System.out.println(obj);
        }
        catch(NullPointerException obj)
        {
            System.out.println("Inside catch2 block");
            System.out.println(obj);
        }
        catch(Exception obj)    //MSD  //Derived class internally works as upcasting
        {
            System.out.println("Inside catch3 block");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("Inside finally block");
            sobj.close();     //close mhanj sobj gheun ja
        }
    }
}