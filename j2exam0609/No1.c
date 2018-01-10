#include <stdio.h>

int main(void){
	int a=0,i=1;

	while( i <= 1000 ){
		if( i%9==0 ) a+=i;
		i++;
	}

	printf("%d\n",a);

	return 0;
}
