#include <stdio.h>
#include <time.h>
#define NUM 8

int main(void){
	char pass[NUM+1];
	int r;
	int i;

	srand((unsigned int)time(NULL));

	for(i=0;i<NUM;i++){
		r = rand()%(26+26+10);
		if( r < 26 ){
			pass[i] = 'a' + r;
		}else if( r < 26+26 ){
			pass[i] = 'A' + r - 26;
		}else{
			pass[i] = '0' + r - 26 - 26;
		}
	}
	pass[NUM] = '\0';
	printf("%s\n",pass);

	return 0;
}
