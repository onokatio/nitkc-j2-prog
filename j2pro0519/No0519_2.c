#include <stdio.h>

double y2m(double yard){
	return yard*0.453592;
}

int main(void){
	double a;

	printf("input pond > ");
	scanf("%lf",&a);

	printf("%f",y2m(a));

	return 0;
}
