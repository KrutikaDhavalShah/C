#include<iostream>
using namespace std;


//class declaration
class Base                                     
{
    public:               //access specifier
        int A;                 
        int B;                 
        
        void fun()
        {
            cout<<"Inside Base fun\n";               //1000
        }
        virtual void gun()
        {
            cout<<"Inside Base gun\n";               //2000 
        }
        virtual void sun()
        {
            cout<<"Inside Base sun\n";               //3000
        }
};    

class Derived : public Base
{
    public:
        int X,Y;

        void gun()
        {
        cout<<"Inside Derived gun\n";                 //4000
        }
        void run()
        {
        cout<<"Inside Derived run\n";                  //5000
        }
        virtual void mun()
        {
        cout<<"Inside Derived mun\n";                  //6000
        }
};



int main()
{
    Base *bp=NULL;
    Derived dobj;
    bp=&dobj;                 // Upcasting

    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";

    bp->fun();                 //CALL 1000
    bp->gun();                 //CALL 2000
    bp->sun();                 //CALL 3000

    return 0;
}

