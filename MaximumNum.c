#include<stdio.h>

int Maximum(int a, int b)
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

int main()
{
    int iNo1 = 0;

    int iNo2 = 0;

    int iMax = 0;

    printf("Enter first number \n");
    scanf("%d",&iNo1);

    printf("Enter second number \n");
    scanf("%d",&iNo2);

    iMax=Maximum(iNo1, iNo2);

    printf("Maximum number is : %d ", iMax);

    return 0;

}