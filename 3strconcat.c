#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3mystrings.h"
#define MAXSIZE 50
int main(int agrc, char *argv[]){
    if (argc!=3){
        printf("pls submit two strings");
        return 1;
    }
    if(strlen(argv[1])>MAXSIZE || strlen(argv[2])>MAXSIZE){
        printf("Mistake. Max string length is 50 symbols");
        return 1;
    }
    strconcat(argv[1],argv[2]);
    printf("%s",argv[1]);
    return 0;
}