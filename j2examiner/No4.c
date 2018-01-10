#include <stdio.h>

int main(void){
	int a[5],cnt[10],i=0,j;

	while( i < 10 ){
		cnt[i] = 0;
		i++;
	}

	i = 0;
	while( i < 5 ){
		printf("num[%d] = ",i);
		scanf("%d",&a[i]);
		if(1000 <= a[i] && a[i] <= 9999){
			i++;
		}else{
			printf("be sure 1000 <= input <=9999\n");
		}
	}

	i = 0;
	while( i < 5 ){
		while(a[i]){
			cnt[ a[i]%10 ]++;
			a[i] /=	10;
		}
		i++;
	}

	i = 0;
	while( i < 10 ){
		printf("%d -> %d\n",i,cnt[i]);
		i++;
	}

	return 0;
}
