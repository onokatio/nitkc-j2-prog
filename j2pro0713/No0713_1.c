#include <stdio.h>

int main(void){
	int i,j;
	char str[] = "lpvtfotbjlpvuboptijjob";
	for(i=0;i<26;i++){
		for(j=0;str[j]!='\0';j++){
			str[j]++;	
			if(str[j]>'z') str[j] -= ('z' - 'a' + 1);
		}
		printf("%s\n",str);
	}
	return 0;
}
