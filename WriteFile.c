#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd=0;
    char Arr[]="PRE PLACEMENT ACTIVITY";
    int Ret=0;

    fd=open("Marvellous.txt",O_RDWR O_APPEND);

 
    Ret=write(fd,Arr,strlen(Arr)); //Parameter(Kashat lihaych,Ky lihaych,kiti Lihaych)

    //Or Ret=write(fd,Arr,22); Manually length of Arr 
      
        printf("%d bytes gets Written in file\n ",Ret);
    
    close(fd);
    return 0;
}

//O_RDWR: Read+write
//O_RDONLY :Read
//O_WRONLY: Write