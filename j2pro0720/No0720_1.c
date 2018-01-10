#include <stdio.h>

int main(void){
	char code[100];

	printf("input code > ");
	scanf("%s",&code);

	reverse(0,code);
	printf("\n");

	return 0;

}

int reverse(int i,char code[100]){
	'0' <= code[i] && code[i] <= '9' && reverse(i+1,code);
	printf("%c",code[i]);
}
