// It includes Swap Count and Loop Count
#include <stdio.h>

int main() {
    int arr[10]={2,4,6,-7,1,2,3,5,6,9};
    int length=sizeof(arr)/sizeof(arr[0]);
    int swap_count=0;
    int loop_count=0;
    for (int i=0;i<length;i++){
        loop_count+=1;
        int swapped=0;
        for(int j=0;j<length-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j+1]=arr[j+1]+arr[j];
                arr[j]=arr[j+1]-arr[j];
                arr[j+1]=arr[j+1]-arr[j];
                swapped=1;
                swap_count+=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
    for(int i=0;i<length;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    printf("Swap Count %d, Loop Count %d",swap_count,loop_count);

    return 0;
}
