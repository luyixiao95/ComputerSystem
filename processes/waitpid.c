 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>

 int main() {
    int flag = fork();
    int stat ;
    if (flag == -1) {
        printf("Fork failed");
        exit(1);
    } else if (flag == 0) {
        printf("Hello \n");
    } else {
        waitpid(flag, &stat, 0);
        printf("GoodBye \n");
    }
    return 0;
 }