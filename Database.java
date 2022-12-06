//start xampp before running the code
//https://dev.mysql.com/downloads/connector/j/(MySQL connector for java)
//https://docs.oracle.com/javase/7/docs/api/java/io/File.html#File(java.lang.String
import java.sql.*;    //1

class Database
{
     public static void main(String arg[]) throws Exception
     {
          //Class.forName("com.mysql.cj.jdbc.Driver");

          String URL = "jdbc:mysql://localhost:3306/ppa41";
          String Username = "root";
          String Password = "root";
          String Query =  "select * from student";//queries are passed through java
                           //DriverManager is class and getConnection is 
                           //static mtd which will return connection object
     
          
          //Class.forName("com.mysql.jdbc.Driver");
          Connection cobj = DriverManager.getConnection(URL,Username,Password);  //2
                 
          Statement sobj = cobj.createStatement();//3  //kora kagad on which we want to write query

          ResultSet robj = sobj.executeQuery(Query);//4  //query written on kagad
         
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