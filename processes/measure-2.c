 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <sys/time.h>

 int main() {
    int size = 7;
    int p[2];
    char store[size];
    pid_t c1_pid, c2_pid;
    struct timeval start, end;
    char* char1 = "Hello1";
    char* char2 = "Hello2";
    cpu_set

    (c1_pid = fork()) && (c2_pid = fork());

    if (c1_pid == 0) {
        write(p[1], char1, size);
        gettimeofday(&start, NULL);    

    } else if (c2_pid == 0) {
        printf("%s\n", store);
        gettimeofday(&end, NULL);
        printf("%ld\n", ((end.tv_sec * 1000000 + end.tv_usec)
		  - (start.tv_sec * 1000000 + start.tv_usec)) ) ;
        printf("%s\n", char2);
    } else {
    }
    return 0;
 }