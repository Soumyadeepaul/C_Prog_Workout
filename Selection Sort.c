#include <stdio.h>

int main(){
    int arr[10]={2,4,6,-7,1,2,3,5,6,9};
    for (int i=0;i<10-1;i++){
        int minn=i;
        for(int j=i+1;j<10;j++){
            if(arr[minn]>arr[j]){
                minn=j;
            }
        }
        if (minn!=i){
            arr[minn]+=arr[i];
            arr[i]=arr[minn]-arr[i];
            arr[minn]-=arr[i];
        }
    }
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
