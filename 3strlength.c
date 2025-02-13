#include <stdio.h>
#include <stdlib.h>
#include "3mystrings.h"
int main(int argc, char *argv[]){
    if(argc!=2){
        printf("another argument pls");
        return 1;
    }
    printf("length is %d", argv[1], strlength(argv[1]));
    return 0;
}
