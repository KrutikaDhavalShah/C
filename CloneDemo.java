class CloneDemo
{
     public static void main(String arr[])
     {
          try
          {
          Employee eobj1 = new Employee(101,"Rahul",11000);
          Employee eobj2 = (Employee)eobj1.clone(); //typecasting is done as return value is Object

          System.out.println("Name of first Employee :"+eobj1.Name);
          System.out.println("Name of second Employee :"+eobj2.Name);

          System.out.println("Salary of first Employee :"+eobj1.Salary);
          System.out.println("Salary of second Employee :"+eobj2.Salary);

          eobj1.Name = "Sagar";
          System.out.println("Name of first Employee :"+eobj1.Name);
          System.out.println("Name of second Employee :"+eobj2.Name);
          }
          catch(CloneNotSupportedException obj)
          {}
     }
}

class Employee implements Cloneable   //interface cloneable
{
     public int Eid;
     public String Name;
     public int Salary;

     public Employee(int No, String str, int Value)
     {
          this.Eid = No;
          this.Name = str;
          this.Salary = Value;
     }

     public Object clone() throws CloneNotSupportedException //as it does not allow to clone
     {
          return super.clone();
     }


}     