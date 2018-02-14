#include <stdio.h>

int main(int argc, char *argv[]){
	int i, j, length, n, l;

	printf("%s\n",argv[1]);

	for(i = 0; '0' <= argv[1][i] && argv[1][i] <= '9'; i++){
	}
	length = i;
	printf("\nlen = %d\n", length);
	for(i = length - 1; i >= 0; i--){
		n = (argv[1][i] - '0');
		for(l = 0; l <= (length - i - 1); i++){
			n*= 10;
		}
		j += n;
		printf("now i, s, j = %d %d\n",i,(argv[1][i] - '0'),j);
	}

	printf("%d",j*2);
	return 0;
}
