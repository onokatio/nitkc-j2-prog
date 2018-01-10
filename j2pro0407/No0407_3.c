#include <stdio.h>
int main(void){
int i,j=1,k=1;
	printf("Input num > ");
	scanf("%d",&i);	
	while(j<=i){
		k=1;
		while(k<=j){
			printf("*");
			k++;
		}
		j++;
		printf("\n");
	}
return 0;
}	
