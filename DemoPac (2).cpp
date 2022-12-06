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
        virtual void run()
        {
            cout<<"Inside Base run\n";               //4000
        }
};    

class Derived : public Base
{
    public:
        int X,Y;

        void gun()
        {
        cout<<"Inside Derived gun\n";                 //5000
        }
        virtual void run()
        {
        cout<<"Inside Derived run\n";                  //6000
        }
        virtual void mun()
        {
        cout<<"Inside Derived mun\n";                  //7000
        }
};



int main()
{
   Base * bp = new Derived;        //Upcasting
    //bp = &dobj;                 // Upcasting

    bp->fun();         //Base fun        CALL 1000   no use of virtual
    bp->gun();         //Derived gun     CALL 5000   virtual use
    bp->sun();         //Base sun        CALL 3000   incomplete use of virtual
    bp->run();         //Derived run     CALL 6000   virtual use
    //bp->mun();          //error     

    return 0;
}






