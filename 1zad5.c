#include<stdio.h>
#define DEBUG
void sort(int mas[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(mas[j]>mas[j+1]){
                int temp=mas[j];
                mas[j]=mas[j+1];
                mas[j+1]=temp;
            }
    #ifdef DEBUG 
    for (int h=0; h<n; h++)
        printf("%d \n",mas[h]);
    #endif

}

int main(void){
    int mas[100], n, sum=0;
    sort(mas,n);
    #ifdef DEBUG
    for(int i=0;i<n;i=i+3)
        printf("%d", mas[i]);
    #endif
    for(int r=0;r<n; r=r+3)
        sum=sum+mas[r];
    printf("\n sum is %d", sum);
    }