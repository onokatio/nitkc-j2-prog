#include <stdio.h>

double calc_triangle(double base, double height){
	if( base<0.0 || height<0.0 ) return -1;
	return base*height*(1.0/2.0);
}

int main(void){
	double base,height,ans;

	printf("input base > ");
	scanf("%lf",&base);

	printf("input height > ");
	scanf("%lf",&height);

	ans = calc_triangle(base,height);
	if(ans == -1.0){
		printf("\ninput error\n");
	}else{
		printf("\nAnswer = %f\n",ans);
	}

	return 0;
}
