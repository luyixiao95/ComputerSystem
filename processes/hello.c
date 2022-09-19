 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>

 int main() {
    int flag = fork();

    if (flag == -1) {
        printf("Fork failed");
        exit(1);
    } else if (flag == 0) {
        printf("Hello \n");
    } else {
        wait(NULL);
        printf("GoodBye \n");
    }
    return 0;
 }