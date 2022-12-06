//Write a program which accept 3 numbers from user
// and print its multiplication

//Input : 5    4    7
//Output : 140

//Input : 5    0    7
//Output : 35

//Input : 5    0    0
//Output : 5

//Input : 0    0    0
//Output : 0

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    
    if((iNo1 != 0) && (iNo2 != 0) && (iNo3 != 0))
    {
        return 0;
    }
    else if((iNo1 == 0) || (iNo2 == 0) || (iNo3 == 0))
    {
        return 1;

    }
    else
    {
        return -1;
    }
  
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    if (iRet == 0)
    {
    printf("Multiplication of numbers is: %d\n",iValue1 * iValue2 * iValue3);
    }
    else if (iRet == 1)
    {
        if((iValue1 == 0) && (iValue2 != 0) && (iValue3 != 0))
        {
            iValue1 = 1;
        }
        else if((iValue1 == 0) && (iValue2 == 0) && (iValue3 != 0))
        {
            iValue1 = 1;
            iValue2 = 1;
        }
         else if((iValue1 == 0) && (iValue2 != 0) && (iValue3 == 0))
        {
            iValue1 = 1;
            iValue3 = 1;
        }
        else if((iValue2 == 0) && (iValue3 == 0))
        {
            iValue2 = 1;
            iValue3 = 1;
        }
        else if((iValue1 != 0) && (iValue2 == 0) && (iValue3 != 0))
        {
            iValue2 = 1;
        }
        else if((iValue1 != 0) && (iValue2 != 0) && (iValue3 == 0))
        {
            iValue3 = 1;
        }
        else
        {
            return -1;
        }
       
        printf("%d\n", iValue1);
        printf("%d\n", iValue2);
        printf("%d\n", iValue3);

        printf("Multiplication of numbers is: %d\n",iValue1 * iValue2 * iValue3);
    }
    else
    {
        return -1;
    }
    return 0;
}


