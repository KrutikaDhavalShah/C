#include<iostream>

using namespace std;

class Base                                    
{
    public:               
        int i; 
    
    private:
        int j;
        
    protected:                
        int k;          

    public:
        Base()                   
        {
        i=10;
        j=20;
        k=30;
        }
};

class Derived : public Base
{
    public:

    void fun()
    {
        cout<<"Value of public i : "<<i<<"\n";
       // cout<<"Value of private j : "<<j<<"\n";
        cout<<"Value of protected k : "<<k<<"\n";
    }

};

int main()
{
    Derived dobj;

    dobj.fun();

    return 0;
}
