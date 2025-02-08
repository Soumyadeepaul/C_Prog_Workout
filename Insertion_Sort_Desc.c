#include <stdio.h>

int main() {
    int arr[10]={2,4,6,-7,1,2,3,5,6,9};
    int i=1;
    int key;
    int j;
    while (i<10){
        j=i-1;
        key=arr[i];
        while (j>=0 & arr[j]<key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
        i+=1;
    }
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }

    return 0;
}
