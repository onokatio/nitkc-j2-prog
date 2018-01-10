#include <stdio.h>
#include <time.h>

#define NUM 100

void rand_lower(int array[NUM]);
void count(int array[NUM]);

int main(void){
	int array[NUM];

	srand((unsigned int)time(NULL));
	rand_lower(array);
	count(array);
}

void rand_lower(int array[NUM]){
	int i;
	for(i = 0; i < NUM ; i++)	array[i] = rand()%26 + 'a';
}

void count(int array[NUM]){
	int i;
	int n;
	for(i = 0; i < NUM ; i++)	n+= array[i]=='s' ? 1 : 0;
	printf("%d\n",n);
}
