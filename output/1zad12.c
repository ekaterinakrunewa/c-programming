#include <stdio.h>
#define MACRO(A,B) ((A+B)*(A+B))
int main(){
    printf("%d",MACRO(1,3));
}