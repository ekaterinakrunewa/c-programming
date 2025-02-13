#include<stdio.h>
#if defined (_WIN64) || defined (_WIN32)
    void sort(int arr[],int n){
        for(int i=0;i<n; i++)
            for(int j=0;j<n-i-1;j++)
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
    }

#elif defined(linux)
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int g=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[g])
                 g=j;
        int temp=arr[i];
        arr[i]=arr[g];
        arr[g]=temp;
    }
}

#elif defined (APPLE) || defined (MACH)
    void sort(int arr[],int n){
        for(int i=1; i<n;i++){
            int t=arr[i];
            int j=i-1;
            while(j && arr[j]>t){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=t;
        }
    }

#else
void sort(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

#endif

int main(void){
    int arr[100],n;
    sort(arr,n);
}
