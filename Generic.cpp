//problems on numbers,digits-specific
//problems on n numbers-generic

#include<iostream>
using namespace std;

template<class T>
T Add(T i, T j)   //naked function as it is not in a class
{
    T ans;
    ans = i + j;
    return ans;
}

int main()
{
    int a = 10, b= 11, iret =0;

    float x = 90.8f, y = 67.1f, fret = 0.0f;

    double p = 100.8, q = 67.1, dret = 0.0;

    iret = Add(a,b);
    fret = Add(x,y);
    dret = Add(p,q);

    cout << "Addition of integers : "<< iret<< "\n";
    cout << "Addition of float : "<< fret<< "\n";
    cout << "Addition of double : "<< dret<< "\n";
}