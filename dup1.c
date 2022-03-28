#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
	int fd1, fd2;
	fd1 = open("simple.txt", O_RDONLY);
	printf("Old file descriptor value is :%d\n", fd1);
	fd2 = dup(fd1);
	printf("New file descriptor value is :%d\n", fd2);
	return 0;
}
