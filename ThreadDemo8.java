class ThreadDemo8
{
     public static void main(String arr[]) 
     {
          System.out.println("Inside main method");   //main is a parent thread
          Demo obj1 = new Demo();
          Demo obj2 = new Demo();

          Thread t1  = new Thread(obj1);  //creation of new thread
          Thread t2  = new Thread(obj2);

          t1.setName("First");//t1 and t2 are siblings
          t2.setName("Second");

          try
          {
          t1.start();   //start() will internally call run() when scheduler 
                    //schedules it
          t1.join();   //Because of it both works serially

          t2.start();
          t2.join();
          }
          catch(InterruptedException obj)
          {} 

          System.out.println("End of main thread");
     }
}

class Demo extends Thread
{
     public void run()
     {
          int i = 0;
          for(i = 1; i <= 10; i++)
          {
               try
               {
               System.out.println(Thread.currentThread().getName()+" : " +i);
               Thread.sleep(500);//Its a ms, 1sec is 1000ms;needs to handle checked exception
               }
               catch(InterruptedException obj)
               {}        
          }
     }
}

