#include <stdio.h>
#include <stdlib.h>
#define NUM 100000

int main(void)
{
	int i=0,j,k,l,m;
	int useflag[NUM];
	srand((unsigned)time(NULL));

	while(i<NUM){
 		useflag[i]=0;
		i++;
	}

	i=0;
	while(i<NUM){
		while(1){
			j = rand()%NUM;
			if(useflag[j]==0) break;
		}
		useflag[j]=1;

		l = j/(10000);
		m = l * 10000;
		j = j-m;
		
		printf("0438-0%d-%04d\n",l,j);
		i++;
	}


/*		k=0;
		while(k<NUM){
 				printf("useflag[%d] = %d\n",k,useflag[k]);
				k++;
		} */

  return 0;
}
    
