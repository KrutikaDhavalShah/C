//start xampp before running the code
//https://dev.mysql.com/downloads/connector/j/(MySQL connector for java)
import java.sql.*;    //1

class Database
{
     public static void main(String arg[]) throws Exception
     {
     //DriverManager class is defined in java.sql
          Connection cobj = DriverManager.getConnection( "jdbc:mysql://localhost:3306/ppa41","root","root");  //2
        //if cobj reference is NULL connection fails

          Statement sobj = cobj.createStatement();//3  //kora kagad on which we want to write query

          ResultSet robj = sobj.executeQuery("select * from student");//4  //query written on kagad
         
          //while loop will iterate number of times of record
          while(robj.next())      //5       //while stops when return value is NULL
          {
               System.out.println("RID :"+ robj.getInt("RID"));
               System.out.println("Name :"+ robj.getString("Name"));
               System.out.println("City :"+ robj.getString("City"));
               System.out.println("Marks :"+ robj.getInt("Marks"));
          }

          cobj.close();
          sobj.close();
          robj.close();

     }


     //execute()              Create table
     //executeQuery()         select
     //executeUpdate()        delete/update/alter/insert

}