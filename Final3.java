class Final2
{
     public static void main(String arr[])
     {
         Base bobj = new Derived();

     }
}

final class Base
{
     public void fun()
     {
          System.out.println("Base fun");
     }

      public final void gun()    //Overloading is allowed
     {
          System.out.println("Base gun");
     }
     public void gun(int A)
     {
          System.out.println("Base gun with one parameter");
     }
    
} 
class Derived extends Base
{
     public void fun()
     {
          System.out.println("Derived fun");
     }

     public void gun()                 //Overriding not allowed
     {
          System.out.println("Derived gun");
     }
    
} 







