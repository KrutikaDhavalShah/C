//interfece is a blueprint of a  class which contains ALL abstract methods in it
// interface achieves 100% abstraction

class InterfaceDemo
{
     public static void main(String arr[])
     {
         System.out.println("Value of PI is :"+ Circle.PI);// To demonstrate public and static
         //Circle.PI = 7.12;  error: cannot assign a value to final variable PI;//To demonstrate final
          Circle cobj = new Marvellous();
          float Ret = 0.0f;
          Ret = cobj.Area(10.5f);
          System.out.println("Area is : "+Ret);
           Ret = cobj.Circumference(10.5f);
          System.out.println("Circumference is : "+Ret);
     }
}

interface Circle
{
     float PI = 3.14f;      // public static final float PI = 3.14f
     float Area(float Radius);// public abstract float Area(float Radius)
     float Circumference(float Radius);// public abstract float Circumference(float Radius)
}
class Marvellous implements Circle
{
     public float Area(float Radius)
     {
          return PI * Radius * Radius;
     }
     public float Circumference(float Radius)
     {
          return 2 *PI * Radius;
     }
}

