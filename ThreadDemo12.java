import java.util.*;

class ThreadDemo12
{
     public static void main(String arr[]) throws InterruptedException
     {
          Data obj1 = new Data(6);
          obj1.Accept();

          DemoEven eobj = new DemoEven(obj1); 
          DemoOdd oobj = new DemoOdd(obj1);   

          Thread t1 = new Thread(eobj);   
          //thread chya object madhe DemoEven class cha reference 
          //Demo Even madhe data chya class cha reference 
          //ani data madhe Arr cha reference 
          Thread t2 = new Thread(oobj);   

          t1.start();
          t2.start();

          t1.join();
          t2.join();    
     }
}

class Data
{
     public int Arr[];

     public Data(int Size)
     {
          Arr = new int[Size];
     }

     //protected void finalize()
     //{
      //    Arr = null;
    // }
     public void Accept()
     {
          Scanner sobj = new Scanner(System.in);
          System.out.println("Enter numbers");
          for(int i = 0; i<Arr.length;i++)
          {
               Arr[i] = sobj.nextInt();
          }
     }
}

class DemoEven extends Thread
{
        public Data dobj;   //eka object madhe dusra object thevna(Composition)

        public DemoEven(Data obj)   //reference  ;Parameterized constructor
        {
          dobj = obj;
        } 
        public void run()
        {
           for(int i = 0; i<dobj.Arr.length;i++)
          {
               if(dobj.Arr[i] % 2 == 0)
               {
                    System.out.println("Even number is: "+dobj.Arr[i]);
               }
          }
        }
}

class DemoOdd extends Thread
{
        public Data dobj;   //eka object madhe dusra object thevna(Composition)

        public DemoOdd(Data obj)
        {
          dobj = obj;
        } 
        public void run()
        {
           for(int i = 0; i<dobj.Arr.length;i++)
          {
               if(dobj.Arr[i] % 2 != 0)
               {
                    System.out.println("Odd number is: "+dobj.Arr[i]);
               }
          }
        }
}



