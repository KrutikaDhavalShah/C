#include<iostream>

using namespace std;

class Maximum                                    
{
    public:
        int a,b;
    
    int Max(int a, int b)
       {
            if( a > b )
            {
                return a;
            }

            else
            {
                return b;
            }
        }
};

int main()
{
    int iNo1=0;
    int iNo2=0;
    int iRet=0;

    Maximum obj1;

    cout<<"Enter first number"<<"\n";
    cin>>iNo1;

    cout<<"Enter second number"<<"\n";
    cin>>iNo2;

    iRet=obj1.Max(iNo1,iNo2);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  

    //printf("Maximum number is : %d ", iMax);
    cout<<"Maximum number is :"<<iRet;

 
    return 0;
}
