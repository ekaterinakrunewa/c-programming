#include <stdio.h>
#define SWAP(A,B,TYPE)  \
    TYPE t= (A);   \
    (A)=(B);      \
    (B)= t;
#define SORT(ARRAY, SIZE, TYPE, COMPARE)\
for(int i=0; i< (SIZE); i++){\
    for(int j=0; j<(SIZE)-i-1;j++){\
        if((ARRAY)[j] COMPARE (ARRAY)[j+1]){\
            SWAP((ARRAY)[j],(ARRAY)[j+1], TYPE);\
        }\
    }\
}

int main(){
    int arr[5]={1,2,3,4,5};
    SORT(arr, 5, int, <);
    for(int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}