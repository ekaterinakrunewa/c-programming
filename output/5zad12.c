#include "5zad12.h"
long factorial(int n){
    if(n<=1) return 1;
    return n*factorial(n-1);
}