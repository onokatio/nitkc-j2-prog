#include <stdio.h>
int main(void){
	int i[10],j=0,k=0;
	while(j<10){
		i[j]= ( j+1 )*2 -1;
		printf("i[%d] = %d\n",j,i[j]);
		k+=i[j];
		j++;
	}
	printf("All sum is %d\n",k);
return 0;
}
