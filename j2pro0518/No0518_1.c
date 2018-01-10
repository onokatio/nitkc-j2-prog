#include <stdio.h>

int calc_second(int hour, int minute, int second){
	int r = 0;
	r = hour*3600 + minute*60 + second;
	return r;
}

int main(void){
	int hour,minute,second,r;

	printf("input hour > ");
	scanf("%d",&hour);
	printf("input minute > ");
	scanf("%d",&minute);
	printf("input second > ");
	scanf("%d",&second);

	r = calc_second(hour,minute,second);
	printf("%d",r);
	return 0;
}
