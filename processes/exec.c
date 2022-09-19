 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>

 int main() {
    int flag = fork();

    if (flag == -1) {
        printf("Fork failed");
        exit(1);
    } else if (flag == 0) {
        //Use evecvp
        char *args[] = {"./hello", NULL}; 
        execvp(args[0], args);
        //
    } else {
        wait(NULL);
    }
    return 0;
 }