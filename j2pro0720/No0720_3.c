#include <stdio.h>

int main(void){
	char str[100];

	printf("input code > ");
	scanf("%s",str);

	printf("%d",r(0,str));

	return 0;
}
	
int r(int i,char str[]){
	return (str[i]-'0') + (str[i+1] ? r(i+1,str) : 0);
}
