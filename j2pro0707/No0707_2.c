#include <stdio.h>

int main(void){
	char word[] = "Which do you think more exciting, soccer or baseball?";
	int i,j;
	
	for(i=0,j=0;word[i] != '\0';j++,i++) for(;word[i] != ' ' && word[i] != '\0';i++);
	
	printf("%d\n",j);

	return 0;
}
