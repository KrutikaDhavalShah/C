#include<stdio.h>

int main()

{
   int i=80;
   char ch='A';
   double d=80.112;
   float f=9.09;

   char *cp=&ch;
float *fp=&f;
double *dp=&d;
int *ip=&i;
printf("Value of ch:%c",ch);
printf("Address of ch:%c",&ch);
printf("Value inside cp:%p",ch);
printf("Data refer by cp:%c",*cp);

    return 0;
}