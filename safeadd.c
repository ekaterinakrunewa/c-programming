#include <stdio.h> 
#include "safeint.h" 
int main(int argc, char* argv[]) {
     if (argc!=3) { 
        printf("Invalid number of arguments"); 
        printf("\n");
        return 1; 
        }

saferesult a=safestro(argv[1]), b=safestro(argv[2]); 
if (a.errorflag || b.errorflag) { 
    printf("Invalid arguments"); 
     printf("\n");
    return 1; 
    }

saferesult ek = safeadd(a.value, b.value); 
    if (ek.errorflag) { 
        printf("Overflow or underflow");
         printf("\n"); 
        return 1; 
        }

printf("%d + %d = %d", a.value, b.value, ek.value); 
 printf("\n");

return 0; 
}