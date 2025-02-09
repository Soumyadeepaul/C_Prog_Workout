/*
*****
 ***
  *
*/
#include <stdio.h>
int main(){
    int line1;
    printf("Enter the *'s for line one: ");
    scanf("%d",&line1);
    int space=0;
    int new_line=line1;
    for(int i=0;i<line1;i=i+1){
        new_line=line1-space;
        for(int j=0;j<new_line;j++){
            printf("*");
        }
        space+=2;
        printf("\n");
        for(int j=0;j<space/2;j++){
            printf(" ");
        }
    }
}
