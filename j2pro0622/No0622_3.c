#include <stdio.h>

char my_toupper(char ch){
	if('a' <= ch && ch <= 'z'){
		return ch+('A'-'a');
	}else{
		return ch;
	}
}

int main(void){
	char a;

	printf("input > ");
	scanf("%c",&a);

	a = my_toupper(a);
	printf("%c",a);

	return 0;
}
