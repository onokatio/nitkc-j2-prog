#include <stdio.h>

double y2m(double yard){
	return yard*0.9114;
}

int main(void){
	double a;

	printf("input yard > ");
	scanf("%lf",&a);

	printf("%f",y2m(a));

	return 0;
}
