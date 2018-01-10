#include <stdio.h>

int main(void){
	unsigned char code[100];
	code[98] = 4;
	code[99] = 0;

	printf("input code > ");
	scanf("%s",&code);

	reverse(0,code);
	printf("\n");

	return 0;

}

int reverse(int i,char code[100]){
	'0' <= code[i+1] && code[i+1] <= '9' ? reverse(i+1,code) : (code[99] = i );
	code[98] && printf("%c",code[code[99]-code[98]--+1]) && reverse(i,code);
}
