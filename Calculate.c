//Write a program which accept total marks & obtained marks from user
// and calculate percentage.

//Input : 1000     745
//Output : 74.5%

#include<stdio.h>
float Percentage(int iNo1, float fNo2)
{
    float fPercentage = (fNo2 / iNo1) * 100.0;
  
    return fPercentage;
}

int main()
{
    int iValue1 = 0;
    float fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Please enter total marks: \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks: \n");
    scanf("%f",&fValue2);

    fRet = Percentage(iValue1, fValue2);

    printf("Percentage is %.2f%%", fRet);
    
    return 0;
}


