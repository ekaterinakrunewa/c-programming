#include <stdio.h>
#include "mystrings.h"
int main(){
    char str1[20]="hello";
    char str2[20]="world";
    printf("string length: %d",strlenght(str1));
    strconcat(str1,str2);
    printf("concat: %s",str1);
    int c=strcompare("Kati","Kate");
    printf("string compare: %d",c);
}