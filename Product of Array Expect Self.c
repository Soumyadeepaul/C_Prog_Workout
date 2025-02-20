// Optimized Approach TC O(n) and SC O(1)


#include <stdio.h>

int main() {
    // calculate * of prefix of every element O(n)
    // Take sufix a variable and directly * with answer
    //[2,3,1,5,6]
    //step1 [1,2,6,6,30]
    //step2 [1,2,6,6,30*1]  as sufix=1 
    // sufix=sufix*6
    //[1,2,6,6*6,30]   as sufix=6
    // sufix=sufix*5 .......
    int arr[5]={2,3,1,5,6};
    int ans[5]={1};
    for(int i=1;i<5;i++){
        ans[i]=ans[i-1]*arr[i-1];
    }
    int sufix=1;
    for(int i=4;i>=0;i--){
        ans[i]=ans[i]*sufix;
        sufix*=arr[i];
    }
    for(int i=0;i<5;i++){
        printf("%d,",ans[i]);
    }

    return 0;
}
