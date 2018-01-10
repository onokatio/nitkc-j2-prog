#include <stdio.h>

int main(void){
	int i,z;
	char str[100];
	char input[100];
	
	printf("input num > ");
	scanf("%s",input);

	for(i=0;i<26;i++) str[(26-i+17)*2] = i+'a';

	for(i=0;input[i]!='\0';i+=2){
		z = 10 * (input[i] - '0' ) + ( input[i+1] - '0' );	
		printf("%c",str[z]);
	}

	printf("\n");

	return 0;
}
