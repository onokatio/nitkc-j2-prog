#include <stdio.h>

int main(void){
	int a[3];

	printf("input line len 1 > ");
	scanf("%d",&a[0]);

	printf("input line len 2 > ");
	scanf("%d",&a[1]);

	printf("input line len 3 > ");
	scanf("%d",&a[2]);

	if(a[0] != a[1] && a[1] != a[2] && a[2] != a[0]){
		printf("input error");
		return -1;
	}

	if(a[0] == a[1]){
		printf("%d\n",a[2]);
	}else if(a[1] == a[2]){
		printf("%d\n",a[0]);
	}else{
		printf("another line len is %d\n",a[1]);
	}

	return 0;
}
