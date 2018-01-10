#include <stdio.h>

int main(int argc, char *argv[]){
	char code[100];
	int maxp=0,maxi=0;
	int i,j;

	for(i=atoi(argv[1]);;i++){
		sprintf(code,"%d",i);
		j = calcBattlePoint3(code);
		if(j > maxp){
			maxp = j;
			maxi = i;
			printf("maxp = %d ,maxi = %d\n",maxp,maxi);
			fflush(stdout);
		}
	}

	return 0;

}
