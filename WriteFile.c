#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//include<unistd.h>    for Linux

int main()
{

    char Fname[20];
    int fd = 0;                 //fd is file descriptor

    printf("Please enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);   //#define RDWR and no is defined; It is a macro
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    write(fd,"Marvellous",10);//kashat lihaycha,kay lihaycha,kiti lihaycha

    close(fd);

    return 0;
}