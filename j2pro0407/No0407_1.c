#include <stdio.h>

int main(void){
	int i;
	printf("年齢を入力してください > ");
	scanf("%d",&i);
	if( i<0 || i>110 ){
		printf("年齢は0～110歳までの範囲で入力してください。\n");
		return 1;
	}else{
		if(i<=6){
			printf("無料です\n");
		}else if(i<12){
			printf("350円です\n");
		}else{
			printf("700円です\n");
		}
	}
return 0;
}
