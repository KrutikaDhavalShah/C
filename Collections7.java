//Stack Last in first out
//push to insert and pop to remove
import java.util.*;


public class Collections7
{
    public static void main(String A[]) 
    {
      Stack <Character>sobj = new Stack<Character>();

      sobj.push('a');
      sobj.push('b');
      sobj.push('c');
      sobj.push('d');
      sobj.push('e');

      //stack cannot be iterated

      System.out.println("Elements of stack : "+sobj);

      System.out.println("Poped element is : " +sobj.pop());

       System.out.println("Elements of stack : "+sobj);




    }
}

