/*-2 -6 18 54 -162*/

#include <stdio.h>

/*int main(){
	int start=-2;
	for(int i=0;i<5;i++){
		if(i%2==0){
			printf("%d,",start);
			start=start*3;
		}
		else{
			printf("%d,",start);
			start=start*(-3);
		}
	}
	return 0;
}*/

int main(){
	int start=-2;
	int index=0;
	int i=0;
	while (i<5){
		printf("%d,",start);
		if (index==0){
			start=start*3;
			index=1;	
		}
		else{
			start=start*(-3);
			index=0;
		}
		i+=1;
	}
	return 0;
}
