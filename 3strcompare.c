#include <stdio.h>
#include <stdlib.h>
#include "3mystrings.h"
int main(int arrgc,char *argv[]){
    if(argc!=3){
        printf("pls submit two strings");
        return 1;
    }
    int r=strcompare(argv[1],argv[2]);
    if(r==0){
        printf("The strings are the same\n");
    }
    else if(r<0){
        printf("1st string is smaller than the 2nd\n");
    }
    else{
        printf("1st string is bigger than the 2nd\n");
    }
    return 0;
}