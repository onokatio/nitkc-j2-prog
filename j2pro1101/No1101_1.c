#include <stdio.h>
#include <stdlib.h>

int main(){
	int len;
	int i;
	char *password;

	printf("input pass length: ");
	scanf("%d",&len);

	password = (char *)malloc(sizeof(char)*(len+1));

	for(i = 0; i < len ; i++){
		password[i] = 'A'+rand()%26;
	}
	password[i] = '\n';

	printf("password : %s",password);

	free(password);
	return 0;
}
