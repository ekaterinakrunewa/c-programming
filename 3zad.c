#include <stdio.h>
#define DEBUG(A) printf("%s %d %s %d", #A, A, __FILE__, __LINE__);
int main(){
    int x=45;
    DEBUG(x);
    return 0;
}