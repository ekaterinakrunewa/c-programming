#include <stdio.h>
#include "quadraticroots.h" 
#include <math.h> 
QuadraticRootsResult 
findroots(const long double a, const long double b, const long double c) {
    QuadraticRootsResult result;
    double e = b * b - 4 * a * c;
    if (e < 0) {
        result.x1 = 0;
        result.x2 = 0;
        result.norealroots = 1; 
        } 
    else { 
        result.x1 = (-b + sqrtl(e)) / (2 * a);
        result.x2 = (-b - sqrtl(e)) / (2 * a);
        result.norealroots = 0; 
        }
return result;
}