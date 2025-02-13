#include <stdio.h>
#include <math.h>
void raise_to_fourth(long arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=(long)pow(arr[i],4);
    }
}
int main(void){
    long arr[]={1,3,4,6,17};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Before change:\n");
    for(int r=0;r<size;r++){
        printf("%ld ",arr[r]);
    }
}