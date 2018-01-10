#include <stdio.h>

int main(void){
	int i,j,num;
	char str[] = "hayakukoikoinatsuyasumi";

	printf("input key num > ");
	scanf("%d",&num);

	for(j=0;str[j]!='\0';j++){
		i = str[j] - 'a';
		i += num;
		while(i>('z'-'a')) i -= ('z' - 'a' + 1);
		str[j] = i + 'a';
	}

	printf("%s\n",str);
	return 0;
}
