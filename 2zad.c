#include <stdio.h>
#define COMPARE(A,B) A>B?A:B
int main(){
    printf("The bigger number is: %d",COMPARE(4,5));
    return 0;
}