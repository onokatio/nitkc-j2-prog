#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=0,j=6000000,k,l[6];
	srand((unsigned)time(NULL));

	while(i<6){
 		l[i]=0;
		i++;
	}

	while(j){
		i = rand()%7;	
		k = i?i:2;

		l[k-1]++;

		j--;
	}

	while(j<6){
		printf("%d = %d\n",j+1,l[j]);
		j++;
	}


  return 0;
}
    
