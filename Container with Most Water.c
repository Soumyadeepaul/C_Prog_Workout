
#include <stdio.h>
#define min(a,b)  a>b?b:a

int main() {
    // Starting from the last bar
    // capacity between each bar in min of 2 bars and its breath
    int bar[9]={1,8,6,2,5,4,8,3,6};
    int capacity=0;
    int selected_bar[2]={0,0};
    for(int i=8;i>0;i--){
        int breath=1;
        for(int j=i-1;j>=0;j--){
            int lower=min(bar[i],bar[j]);
            if (capacity<(breath*lower)){
                capacity=breath*lower;
                selected_bar[0]=j;
                selected_bar[1]=i;
            }
            breath+=1;
        }
    }
    printf("Max Capacity: %d\n",capacity);
    printf("Bar Index: %d to %d, Breath: %d",selected_bar[0],selected_bar[1],selected_bar[1]-selected_bar[0]);

    return 0;
}
