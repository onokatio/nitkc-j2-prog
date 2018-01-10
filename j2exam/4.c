#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getBall(void){
	int a[3];

	a[0] = rand()%11;
	if(a[0]<4) return 1;

	a[1]=a[0];
	while( a[0]==a[1] ) a[1] = rand()%11;
	if(a[1]<4) return 1;

	a[2]=a[0];
	while( a[0]==a[2] || a[1]==a[2] ) a[2] = rand()%11;
	if(a[2]<4) return 1;

	return 0;
}

int main(void){
	int i,a=0,b=0;
	int n=10000;
	srand((unsigned)time(NULL));

	for(i=1;i<=n;i++){
		getBall() ? a++ : b++;	
	}

//	printf("red is %d, white is %d \n",a,b);
	printf("red is %d%%, white is %d%%",(a*100)/n,(b*100)/n);

	return 0;
}
