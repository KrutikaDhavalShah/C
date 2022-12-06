#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{

    char Fname[20];
    int fd = 0;                 

    printf("Please enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);   //#define RDWR and no. is defined; It is a macro
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    return 0;
}