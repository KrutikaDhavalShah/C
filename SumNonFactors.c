//Write a program which accept number from user
// and display sum of its non factors

//Input : 12
//Output : 50

//Input : 13
//Output : 77

//Input : 10
//Output : 37

#include<stdio.h>

int SumNonFact(int iNo)
{
  int i = 0;
  int iSum = 0;
    for(i = 1;i <= iNo; i++)
  {
    if((iNo % i) != 0)
    {
    //printf("%d\t",i);
    iSum = iSum + i;
    }
  }
  return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}

//In this program, time complexity is N