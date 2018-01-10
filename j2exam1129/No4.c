#include <stdio.h>
#include <stdlib.h>

int main(){
	int numnum;
	int *array;
	int i;
	int sum = 0;

	printf("入力する個数=");
	scanf("%d",&numnum);

	array = (int *)malloc(sizeof(int)*numnum);

	for(i=0; i<numnum ; i++){
		printf("array[%d]=",i);
		scanf("%d",(array+i));

		sum += *(array+i);
	}

	printf("\n(1) sum=%d\n",sum);

	printf("\n(2)\n");
	for(i=numnum-1; i>=0 ; i--){
		printf("array[%d]=%d\n",i,*(array+i));
	}
}
