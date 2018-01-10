#include <stdio.h>
int ruijyo(int num,int power){
	int i=1;
	while(power){
		i*=num;
		power--;
	}
	return i;
}

int main(void)
{
	int a,b;

	printf("(x^y) x=");
	scanf("%d",&a);
	printf("(x^y) y=");
	scanf("%d",&b);


	printf("%d\n",ruijyo(a,b));

	return 0;
}
