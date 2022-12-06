//Write a program which accept name from user
// and print that name

//Input : Piyush Khairnar
//Output : Piyush Khairnar

#include<stdio.h>

int main()
{
    char Name[30];
    int i = 0;

    printf("Please enter name: \n");
    scanf("%[^\n]%*c",Name);          //scanf("%[^\n]s",Name); 
    printf("Your name is %s",Name);
  
    return 0;
}

/*
Explanation : Here, [] is the scanset character. 
^\n tells to take input until newline doesn’t get encountered.
 Then, with this %*c, it reads newline character 
 and here used * indicates that this newline character is discarded.
*/
