#include <stdio.h>
#define SIZE 5

int main(void){
	char str[SIZE];
	int i;

	for(i=0;i<SIZE;i++){
		printf("str[%d] > ",i);
		scanf("%c%c",&str[i]);
	}
	for(i=SIZE-1;i>-1;i--){
		printf("str[%d] > %c",i,str[i]);
	}
	return 0;
}
