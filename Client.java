import java.net.*;
import java.io.*;

public class Client
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Client application is running...");

        //To establish connection between server and client

        Socket s = new Socket("localhost",2100);
        System.out.println("Client is waiting for the server to accept the request");

        //Connection between client and server is established

      
        PrintStream ps = new PrintStream(s.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        //Start communication

         String str1, str2;

        while(!(str1 = br2.readLine()).equals("end"))
        {
          ps.println(str1);
          System.out.print("Enter message for server : ");
          str2 = br1.readLine();
          System.out.println("Server says : "+ str2);

        }
    }
}
