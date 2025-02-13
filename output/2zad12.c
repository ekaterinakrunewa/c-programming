#include <stdio.h>
int gcb(int a, int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int lcm(int a, int b){
    return (a*b) / gcb (a,b);
}

int main(){
    int r= lcm(12,18);2
    printf("%d\n",r);
}