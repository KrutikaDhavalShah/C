import java.util.*;


public class Collections4
{
    public static void main(String A[]) 
    {
       LinkedList <Book>lobj = new LinkedList<Book>();  //Book chya object chi LL
       //Book is object of user defined class

       Book bobj1 = new Book("Let us C",400);    //this is not anonymous object it has name
       Book bobj2 = new Book("Data Structures",580);
       Book bobj3 = new Book("C++ Programming",980);
       Book bobj4 = new Book("Angular Web Development",790);

       lobj.add(bobj1); 
       lobj.add(bobj2);       
       lobj.add(bobj3); 
       lobj.add(bobj4);

       Iterator iobj = lobj.iterator();   //iterator() LL chya class chi method that will
                                        // return reference of Iterator class object

       Book bref = null;

      System.out.println("Elements of Linked List are");
       while(iobj.hasNext())    //hasNext and Next are methoda of Iterator class
       {
        bref = (Book)iobj.next();
        bref.Display();
       }

       lobj.clear();
    }
}

class Book
{
  public String Name;
  public int Price;

  public Book(String s, int i)
  {
    this.Name = s;
    this.Price = i;
  }

  public void Display()
  {
    System.out.println("Book name : "+this.Name + "Price :" +this.Price);
  }
}
