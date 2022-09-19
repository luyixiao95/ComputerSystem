 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>

 int main() {
    int i = 100;
    int flag = fork();

    if (flag == -1) {
        printf("Fork failed");
        exit(1);
    } else if (flag == 0) {
        i ++;
        printf("For the child process, add 1, i == %d \n", i);
    } else {
        i ++;
        i ++;
        printf("For the parent process, add 2, i == %d \n", i);
    }
    return 0;
 }