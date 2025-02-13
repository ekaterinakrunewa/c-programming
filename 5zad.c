#include <stdio.h>
#define SWAP(A,B,TYPE) \ 
    TYPE t= (A);   \
    (A)=(B);      \
    (B)= t; 
int main(){
    float a=0.5;
    float b=1.2;
    SWAP(a,b,float);
    printf("%.2f %.2f", a,b);
    return 0;
}