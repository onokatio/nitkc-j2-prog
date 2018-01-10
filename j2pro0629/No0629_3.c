#include <stdio.h>
#include <time.h>

int main(void){
	char ch;
	char oeda[4];
	int stage = 0;
	int count = 0;
	int i;
	
	srand( (unsigned)time(0) );
	oeda[0] = 'o';
	oeda[1] = 'e';
	oeda[2] = 'd';
	oeda[3] = 'a';

	for(i=0;i<1000000;i++){
		ch = rand()%36;
		if(ch < 26){
			ch = 'a' + ch;
		}else{
			ch = '0' + ch - 26;
		}
		if(ch == oeda[stage]){
			stage++;
		}else{
			stage = 0;
		}
		if(stage == 4) count++,stage=0;
		printf("%c",ch);
	}	

	printf("\n%d\n",count);
	return 0;
}
