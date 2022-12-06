//https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html  - field -methods
//difference between arraylist and LL

//both classes holds homogeneous element;
//Arraylist gives fastest index so it is faster then LL(Arraylist adhe madhe kad ghal karu det nahi)
//LL is used for manipulation of list

//sadha array only value initialise and linear and homogeneous;
//ArrayList looks like linear but not linear and is between array & LL
//LL is non linear also its homogeneous
//jar value kadaychi asel tr array
//thodi thodi kad ghal tar arraylist
//Khup kad ghal tar LL
//LL khup sut ani ArrayList kami sut ahe

import java.util.*;


public class Collections6
{
    public static void main(String A[]) 
    {
      ArrayList <Float>aobj = new ArrayList<Float>();

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

