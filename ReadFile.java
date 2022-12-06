import java.io.*;

class ReadFile 
{
    public static void main(String a[]) throws Exception
    {
       FileInputStream fobj = new FileInputStream("Marvellous1.txt");//file opened
                                                                  //in read mode
       int i = 0;

       while((i = fobj.read()) != -1)//we get data in Byte
       {
        System.out.print((char)i);//Byte to char;typecasted into char
       }

       fobj.close();
    }
}