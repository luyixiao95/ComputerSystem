 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <fcntl.h> 


 int main() {
    int fd;
    FILE *file;
    fd = open("open.txt", O_RDONLY);
    file = fopen("open.txt", "r");
    printf("%d \n" , fd);
    int flag = fork();

    if (flag == -1) {
        printf("Fork failed");
        exit(1);
    } else if (flag == 0) 
    {   close(STDOUT_FILENO);
        printf("For the child process,fd == %d \n", fd);
        fclose(file);
    } else {
        int num = 2;
        printf("For the parent process,fp == %d \n", fd);
        fclose(file);
    }
    return 0;
 }