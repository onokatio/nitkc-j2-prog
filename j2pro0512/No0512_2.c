#include <stdio.h>

int smallest(int a, int b, int c){
	return (a>b)?((b>c)?c:b):((a>c)?c:a);
}

int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",smallest(a,b,c));
}
