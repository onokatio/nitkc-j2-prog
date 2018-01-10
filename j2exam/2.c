#include <stdio.h>

double calc_BMI(double weight, double height){
	return weight / (height*height);
}

int main(void){
	double b,e;
	printf("input weight > ");
	scanf("%lf",&b);
	printf("input height > ");
	scanf("%lf",&e);
	
	printf("your bmi is %f",calc_BMI(b,e));

	return 0;
}
