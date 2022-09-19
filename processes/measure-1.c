 #include <stdio.h>
 #include <stdlib.h>
 #include <sys/time.h>
 #include <unistd.h>

 int main() {
    FILE* ptr; 
    struct timeval start, end;

    gettimeofday(&start, NULL);    
    for (int i = 0; i < 1000; i ++ ){
    ptr = fopen("open.txt", "r");
    }
    gettimeofday(&end, NULL);

    printf("%ld\n", ((end.tv_sec * 1000000 + end.tv_usec)
		  - (start.tv_sec * 1000000 + start.tv_usec))/ 1000 ) ;
    return 0;
 }