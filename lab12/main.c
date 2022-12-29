#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    FILE *stream_file;

    int sum;
    sum =atoi(argv[1])+atoi(argv[2]);

    stream_file = freopen("file.txt", "w", stdout);

    printf("%d",sum);

    fclose(stream_file);
}
