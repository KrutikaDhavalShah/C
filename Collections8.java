//Stack Last in first out
//push to insert and pop to remove
//key value pair

//sequence is not maintained
import java.util.*;


public class Collections8
{
    public static void main(String A[]) 
    {
      Hashtable <String, Integer>hobj = new Hashtable<String, Integer>();

      hobj.put("PPA",18000);
      hobj.put("LB",17000);
      hobj.put("Python",16500);
      hobj.put("LSP",21000);

      System.out.println(hobj.get("Python"));        //16500

      hobj.remove("LB");

      Enumeration eobj = hobj.keys();

      while(eobj.hasMoreElements())
      {
        System.out.println("Data is "+eobj.nextElement());
      }      

      



    }
}

