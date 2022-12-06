//Write a program which accept number from user
// and display its multiplication of factors

//Input : 12
//Output : 144         (1 * 2 * 3 * 4 * 6)

//Input : 13
//Output : 1            (1)

//Input : 10
//Output : 1 2 5        (1 * 2 * 5)

#include<stdio.h>

int MultFact(int iNo)
{
  int i = 0;
  int iMult = 1;

  for(i = 1;i < iNo/2;)
  {
    i = i + 1;
    if((iNo % i) == 0)
    {
    iMult = iMult * i;
    }
  }
   //printf("%d\t",iMult);
  return iMult; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return 0;
}

//In this program, time complexity is N/2