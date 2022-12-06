class ThreadDemo11
{
     public static void main(String arr[]) throws InterruptedException
     {
          System.out.println("Inside main method");   //main is a parent thread
          Demo obj1 = new Demo();
          Demo obj2 = new Demo();

          Thread t1  = new Thread(obj1);  //creation of new thread
          Thread t2  = new Thread(obj2);

          t1.setName("First");//t1 and t2 are siblings
          t2.setName("Second");

          System.out.println("Priority of thread 1 is : "+t1.getPriority());
          System.out.println("Priority of thread 2 is : "+t2.getPriority());

          t1.setPriority(10);
          t2.setPriority(2);

          System.out.println("Priority of thread 1 is : "+t1.getPriority());
          System.out.println("Priority of thread 2 is : "+t2.getPriority());

          t1.start();   //start() will internally call run() when scheduler 
                        //schedules it
          t2.start();

          t1.join();
          t2.join();

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

