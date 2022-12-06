class EqualDemo
{
     public static void main(String arr[])
     {
         String s1 = "Hello";
         String s2 = "Hello";

         System.out.println("Hashcode of s1: "+s1.hashCode());//1001
         System.out.println("Hashcode of s2: "+s2.hashCode());//1001

         if (s1.equals(s2))    // if("Hello" == "Hello");deep comparison
         {
           System.out.println("Objects are same");
         }
         else 
         {
           System.out.println("Objects are different");
         }

         if(s1 == s2)          //// if(1001 == 1001);shallow comparison
         {
           System.out.println("Objects are same");
         }
         else 
         {
           System.out.println("Objects are different");
         }
     }
}

class Demo
{
     
     public int No1;
     public int No2;

     public Demo(int a, int b)
     {
          No1 = a;
          No2 = b;
     }

}     