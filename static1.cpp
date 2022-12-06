#include <iostream>
using namespace std;

class Demo
{
    public:

    void func()
    {
    static int num = 1;
    cout <<"Value of num: "<< num <<"\n";
    num++;
    }
};


int main()
 { 
    Demo obj;
   obj.func();
   obj.func();
   obj.func();

   return 0;
}