//Write a program which accept number from user
// and return difference between its factors and non factors

//Input : 12
//Output : -34     (16-50)

//Input : 10
//Output : -29     (8-37)

#include<stdio.h>

int FactDiff(int iNo)
{
  int i = 0;
  int iSumNonFact = 0;
  int iSumFact = 0;
  for(i = 1;i <= iNo/2;i++)
  {
    if((iNo % i) == 0)
    {
    iSumFact = iSumFact + i;
    }
  }
  //printf("%d\n", iSumFact);
  for(i = 1;i <= iNo; i++)
  {
    if((iNo % i) != 0)
    {
    //printf("%d\t",i);
    iSumNonFact = iSumNonFact + i;
    }
  }
  //printf("%d\n", iSumNonFact);
  return (iSumFact-iSumNonFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}

/*In this program, time complexity is:

N/2 + N

N + 2N/2

3N/2

*/

