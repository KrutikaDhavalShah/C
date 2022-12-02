#include<stdio.h>
#include<stdbool.h>

//check if no. is even or odd

bool CheckEven(int iNo)
{
    if((iNo%2)==0)
    {
    return true;
    }
    else
    {
    return false;
    }
}

int main()
{
    int iValue1=0;
    bool bRet=false;

    printf("Enter a number \n");
    scanf("%d", &iValue1);

    bRet=CheckEven(iValue1);

    if(bRet==true)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }

return 0;
}