import java.util.*;


public class Collections5
{
    public static void main(String A[]) 
    {
      Vector <Float>aobj = new Vector<Float>();

      aobj.add(10.6f);
      aobj.add(20.6f);
      aobj.add(30.6f);
      aobj.add(40.6f);
      aobj.add(50.6f);

      aobj.add(1.60f);

      aobj.add(100.60f);
      Iterator iobj = aobj.iterator();

      while(iobj.hasNext())
      {
        System.out.println(iobj.next());
      }
      
      aobj.clear();


    }
}

