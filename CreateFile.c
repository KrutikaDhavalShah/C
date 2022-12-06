#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{

    char Fname[20];
    int fd = 0;     //fd is file descriptor(unique number for file)

    printf("Please enter file name that you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);//first 7 - Owner; 2nd 7-group;3rd 7-Write Read Execute 
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is successfully created with FD %d\n",fd);
    }

    return 0;
}