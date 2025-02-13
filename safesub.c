#include "safeint.h" 
#include <stdio.h> 
int main(int argc, char *argv[]) { 
    if (argc!=3) { 
        printf("Usage: %s <int1> <int2>", argv[0]); 
        printf("\n");
        return 1; 
        } 

saferesult num1=safestro(argv[1]); 
saferesult num2=safestro(argv[2]); 

if (num1.errorflag || num2.errorflag) { 
    printf("Error: Invalid input values.\n"); 
    return 1; 
    } 

saferesult result=safesubtract(num1.value, num2.value); 

if (result.errorflag) { 
    printf("Error: Overflow occurred during subtraction");
    printf("\n"); 
    } 

else { 
    printf("Result: %d", result.value); 
    printf("\n");
    } 

return 0; 
}