//Accept N numbers from user and perform addition

//input
//Value of N=5
//Values: 10,20,30,40,50

//Output
//Addition is: 150

//Algorithm

/*
START
    Accept the number from user
    Allocate the memory to store that numbers
    Accept the numbers from user
    Perform addition of all numbers
    Display the addition
END
*/




//////////////////////////////////////////////////////////////////////////////////////
//
// Application of N numbers
//Input:      N numbers
//Output:     Addition
//Author:     Krutika Dhaval Shah
//Date:       18th September, 2022
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int main()
{

    int *Arr=NULL;
    int iSize=0;
    register int i=0;
    int iSum=0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    Arr=(int*)malloc(iSize * sizeof(int));

    printf("Memory is allocated is successful\n");

    printf("Enter the values of elements\n");

    for(i=0; i<iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    //Addition

    for(i=0;i<iSize;i++)
    {
        iSum=iSum+Arr[i];
        
    }

    printf("Addition is: %d\n",iSum);

    free(Arr);

    printf("Memory gets deallocated\n");

    return 0;
}