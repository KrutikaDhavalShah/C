#include<iostream>
using namespace std;

class Base
{
    public:                          //Access specifier
        int A,B;

        void fun()                   //Function defination             1000
        {
            cout<<"Base fun\n";
        }
        void gun(int i)              //Function defination             2000
        {
            cout<<"Base gun with one parameter\n";
        }
          void gun(int i, int j)     //Overloaded function defination  3000
        {
            cout<<"Base gun with 2 parameters\n";
        }
};

class Derived : public Base
{
    public:
        int X, Y;

        void sun()                       //Function defination         4000
        {
            cout<<"Derived sun\n";
        }
        void fun(int i)                       //Function redefination       5000
        {
            cout<<"Derived fun with 1 parameter\n";
        }
};

int main()
{
    Derived dobj;
    //Base bobj;
    dobj.Base::fun();        //CALL 1000
    //bobj.fun();        // CALL 1000
    dobj.gun(11);      //CALL 2000
    dobj.gun(11,21);   //CALL 1000
    dobj.sun();        //CALL 4000
 
    return 0;
}