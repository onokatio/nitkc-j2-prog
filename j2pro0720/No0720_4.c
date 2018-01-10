#include <stdio.h>

int main(void){
	char code[100];
	char code2[100];

	printf("input code > ");
	scanf("%s",&code);

	printf("%d\n",calcBattlePoint(code));

	return 0;

}
