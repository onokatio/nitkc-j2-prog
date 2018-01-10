#include <stdio.h>
#include <time.h>

int main(void){
	char ch;
	int alpha[36];
	double j;
	int i;
	
	srand( (unsigned)time(0) );

	for(i=0;i<36;i++){
		alpha[i] = 0;
	}

	for(i=0;i<1000000;i++){
		ch = rand()%36;
		alpha[ch]++;

		if(ch < 26){
			ch = 'a' + ch;
		}else{
			ch = '0' + ch - 26;
		}
		
		printf("%c",ch);
	}	
	printf("\n");
	for(i=0;i<36;i++){
		if(i < 26){
			ch = 'a' + i;
		}else{
			ch = '0' + i - 26;
		}
		j = (alpha[i]/1000000.0)*100;
		printf("%c > count:%d %f%%\n",ch,alpha[i], j);
	}
	printf("\n");
	return 0;
}
