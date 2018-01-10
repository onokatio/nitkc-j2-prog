#include <stdio.h>

int main(void){
	char a;

	printf("input > ");
	scanf("%c",&a);

	if(	a < 'a' || 'z' < a ){
		printf("input error");
	}else{
		printf("%c",a);
	}

	return 0;
}
