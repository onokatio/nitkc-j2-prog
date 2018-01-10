#include <stdio.h>
#include <time.h>

int main(void){

	srand((unsigned int)time(NULL));

	printf("%c\n",rand()%26+'a');
	return 0;
}
