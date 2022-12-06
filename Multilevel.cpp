#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"Inside Base Constructor\n";
        }

        ~Base()
        {
           cout<<"Inside Base Destructor\n";
        }

          void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{
  public:
  int X,Y;

        Derived()
       {
            cout<<"Inside Derived Constructor\n";
        }
        ~Derived()
        {
           cout<<"Inside Derived Destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }
};

class DerivedX : public Derived
{
    public:
        int i,j;
         
        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor\n";
        }
        void sun()
        {
            cout<<"Inside sun of DerivedX\n";
        }


};
int main()
{
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
    cout<<"Size of DerivedX : "<<sizeof(DerivedX)<<"\n";
    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}