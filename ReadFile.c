#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//include<unistd.h>    for Linux  universal

int main()
{

    char Fname[20];
    int fd = 0;                 //fd is file descriptor
    char Data[30];

    printf("Please enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);   //O_RDONLY   O_WRONLY     O_RDWR; inbuilt macro ahet like NULL;
                               //O : Open kara
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    read(fd,Data,10);//read : System Call is called by kernel
    //fread is library function
    //kuthun read karaycha,kashat read karaycha,kiti read karaycha

    printf("Data from file is : %s\n",Data);

    close(fd);

    return 0;
}