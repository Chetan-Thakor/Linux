#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
	int fd1, fd2;
	fd1 = open("simple.txt", O_RDONLY);
	printf("New file descriptor is :%d\n", fd1);
	fd2 = dup2(fd1, 10);
	printf("Old file descriptor is :%d\n", fd2);
	return 0;
}
