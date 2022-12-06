
#include<iostream>

using namespace std;

//class declaration
class Demo                                     
{
    public:               //access specifier

    int i;                 //instance variable
    int j;                 //instance variable
    static int k;          //class variable
    static int l;          //class variable

    Demo()                   //default constructor
    {
      i=0;
      j=0;
    }

    Demo(int a, int b)        //parameterised constructor
    {
      i=a;
      j=b;
    }
//void fun(const Demo *this)
    void fun()
    {
       //static + non static
           cout<<"Inside non static method fun\n";
           cout<<"Value of i in obj1:"<<this->i<<"\n";
           cout<<"Value of i in obj1:"<<this->j<<"\n";
           cout<<"Value of k:"<<Demo::k<<"\n";
           cout<<"Value of l:"<<Demo::l<<"\n";
    }

//static void gun()
    static void gun()
    {
       //static 
       cout<<"Inside static method gun\n";
        cout<<"Value k:"<<Demo::k<<"\n";
        cout<<"Value of l:"<<Demo::l<<"\n";
    }
};

//Load time variables
int Demo::k = 0;
int Demo::l=0;

int main()
{
    cout<<"Inside main\n";
    cout<<"Value of k : "<<Demo::k<<"\n";
    cout<<"Value of l : "<<Demo::l<<"\n";
    Demo::gun();
    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;
    cout<<"Value of i in obj1:"<<obj1.i<<"\n";
    cout<<"Value of i in obj2:"<<obj2.i<<"\n";

    cout<<"Value of j in obj1:"<<obj1.j<<"\n";
    cout<<"Value of j in obj2:"<<obj2.j<<"\n";

    obj1.fun();  //fun(&obj1)
    obj2.gun();

    obj1.gun();    //Demo::gun()
    
    return 0;
}

//size of object is summation of sizes of its non static characteristics