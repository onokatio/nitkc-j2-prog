#include <stdio.h>

double is3(num){
	int i;
	if( !(num%3) ) return 1;
	while(num){
		if(num%10 == 3) return 1;
		num /= 10;
	}
	return 0;
	
}

int main(void){
	int i;
	
	for(i=1;i<=40;i++){
		printf( is3(i) ? "%d 今でしょ！\n" : "%d いつやるか？ \n", i);
	}

	return 0;
}
