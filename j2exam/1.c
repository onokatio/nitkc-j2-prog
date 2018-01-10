#include <stdio.h>

int calc_sum(int begin, int end){
	return ( (begin+end) * (end-begin+1) ) / 2;
}

int main(void){
	int b,e;
	printf("input begin > ");
	scanf("%d",&b);
	printf("input end > ");
	scanf("%d",&e);
	
	printf("sum begin : end is %d",calc_sum(b,e));

	return 0;
}
