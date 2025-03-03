
#include <stdio.h>

int maximum(double profitPerUnit[],int size){
    double maximum=-1;
    int index=0;
    for(int i=0;i<size;i++){
        if (maximum<profitPerUnit[i]){
            maximum=profitPerUnit[i];
            index=i;
        }
    }
    return index;
}

int main() {
    // Fractional Knapsack
    int capacity=19;
    int profit[]={20,30,10,5,4};
    int weight[]={5,6,3,6,5};
    //step-1
    //profit per unit
    int size=sizeof(profit)/sizeof(profit[0]);
    double profitPerUnit[size];
    for (int i=0;i<size;i++){
        profitPerUnit[i]=((double)profit[i])/weight[i];
    }
    int index=0;
    double totalProfit=0;
    while (capacity){
        index=maximum(profitPerUnit,size);
        if (weight[index]<=capacity){
            totalProfit+=(double)profit[index];
            capacity-=weight[index];
            profitPerUnit[index]=0;
        }
        else{
            totalProfit+=(((double)profit[index])/weight[index])*(capacity);
            capacity=0;
        }
    }
    printf("%f",totalProfit);
    
    
    

    return 0;
}
