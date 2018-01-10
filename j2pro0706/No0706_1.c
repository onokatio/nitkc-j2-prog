#include <stdio.h>
#define NUM 10

void setNumber(int array[NUM]);
void dispNumber(int array[NUM]);
void doubleNumber(int array[NUM]);

int main(void){
	int array[NUM];
	setNumber(array);
	dispNumber(array);
	doubleNumber(array);
	dispNumber(array);
}

void setNumber(int array[NUM]){
	int i;
	for(i = 0; i < NUM ; i++)	array[i] = i+1;
}

void dispNumber(int array[NUM]){
	int i;
	for(i = 0; i < NUM ; i++)	printf("%d\n",array[i]);
}

void doubleNumber(int array[NUM]){
	int i;
	for(i = 0; i < NUM ; i++)	array[i]*=2;
}
