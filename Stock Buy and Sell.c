#include <stdio.h>

//[2,3,5,1,7,8]
//think every day as a selling day...
//we have to find minimum price before that day


int profitFun(int stock[],int limit){
    int profit=0;
    for (int i=0;i<limit;i++){
        if (stock[limit]-stock[i]>profit && profit>-1){
            profit=stock[limit]-stock[i];
        }
    }
    return profit;
}


int main(){
    int stock[]={2,8,1,6,9};
    int maximum_profit=0;
    int days=sizeof(stock)/sizeof(stock[0]);
    int profit;
    for(int i=days-1;i>=0;i--){
        profit=profitFun(stock,i);
        if(profit>maximum_profit){
            maximum_profit=profit;
        }
    }
    printf("Maximum Profit %d",maximum_profit);
}
