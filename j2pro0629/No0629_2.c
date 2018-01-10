#include <stdio.h>
#include <time.h>

int main(void){
	char ch[5];
	int i;
	int r;
	
	srand( (unsigned)time(0) );
	for(i=0;i<5;i++){
		ch[i]=99;
	}
	for(i = 0;i<5;i++){
		r = rand()%26;
		while(r == ch[0] || r == ch[1] || r == ch[2] || r == ch[3] || r == ch[4] ){
			r = rand()%26;
		}
		ch[i] = r + 'a';
	}

	for(i=0;i<5;i++){
		printf("%c",ch[i]);
	}

	printf("\n");
	return 0;
}
