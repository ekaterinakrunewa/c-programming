#include "quadraticroots.h"
#include <stdio.h>
int main() {
    printf("Test with int agruments:\n");
    QuadraticRootsResult result1 = findroots(1, -3, 2);
        if (result1.norealroots) {
            printf("No real roots\n"); 
            } 
        else {
            printf("x1 = %.2Lf, x2 = %.2Lf\n", result1.x1, result1.x2);
            }
    printf("test with float arguments:\n");

    QuadraticRootsResult result2 = findroots(1.0f, 2.0f, 5.0f);
        if (result2.norealroots) { 
            printf("No real roots\n"); 
            } 
        else { 
            printf("x1 = %.2Lf, x2 = %.2Lf\n", result2.x1, result2.x2); 
            } 
    printf("Test with double arguments:\n"); 

    QuadraticRootsResult result3 = findroots(1.0, -6.0, 9.0);
        if (result3.norealroots) { 
            printf("No real roots\n"); 
            } 
        else { 
            printf("x1 = %.2Lf, x2 = %.2Lf\n", result3.x1, result3.x2); 
            } 

return 0; 
}