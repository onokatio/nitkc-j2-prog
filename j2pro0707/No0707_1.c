#include <stdio.h>

int main(void){
	char word[] = "programming";
	int i;
	
	for(i=0;word[i] != '\0';i++);
	
	printf("%d\n",i);

	return 0;
}
