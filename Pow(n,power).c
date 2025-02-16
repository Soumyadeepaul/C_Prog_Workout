// Online C compiler to run C program online
#include <stdio.h>

int poww(int n, int power){
    //power->binary form
    //            ...421
    //let power 5 -> 101
    //             n^4 * n^1
    float answer=1;
    float previous=n;  //n
    int power_changed=0;
    if (power<0){  //for negative power
        power_changed=1;
        power=-power;
    }
    while(power){
        if(power%2==1){
            answer*=previous;
        }
        previous=previous*previous;  //n*n
        power=power/2;
    }
    if (power_changed){
        printf("%f",1/answer);
    }
    else{
        printf("%f",answer);
    }
}

int main() {
    // Write C code here
    int  n;
    int power;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&power);
    poww(n,power);

    return 0;
}
