 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>

 int main() {
    int size = 7;
    int p[2];
    char store[size];
    pid_t c1_pid, c2_pid;

    (c1_pid = fork()) && (c2_pid = fork());

    if (c1_pid == 0) {
        char* char1 = "Hello1";
        write(p[1], char1, size);
    } else if (c2_pid == 0) {
        char* char2 = "Hello2";
        printf("%s\n", store);
        printf("%s\n", char2);
    } else {
    }
    return 0;
 }