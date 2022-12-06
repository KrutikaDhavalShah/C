import java.io.*;

class WriteFile 
{
    public static void main(String a[]) throws Exception
    {
       FileOutputStream fobj = new FileOutputStream("Marvellous1.txt");
       //internally class open karto file so no open method

       String Data= "Marvellous Infosystems Pune";//array of character
        //sizeof character is 2 Bytes as it supports Unicode

       byte bdata[] = Data.getBytes();    //conversion of String into Byte of array
       //As these are byte data and there should be uniformity so need to convert to Byte
       
       fobj.write(bdata);
       fobj.close();//close method in all java files where resource is allocated
    }
}