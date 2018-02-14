#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define num 50000

void rand_val(int str[]);
void maximum(int str[], int *max);
void minimum(int str[], int *min);
void average(int str[], double *ave);

int main(void){
	int str[num];
	int *max, *min;
    double *ave;

	rand_val(str);

    maximum(str, max);

    minimum(str, min);

    average(str, ave);

	printf("max= %d\nmin= %d\nave= %f\n", *max, *min, *ave);
}

void rand_val(int str[]){
	
    int i;

	srand((unsigned)time(NULL));

	for(i= 0; i< num; i++){
		str[i]= rand()% 20000- 10000;
	}
}

void maximum(int str[], int *max){

    int i;

    max= &str[0];

	for(i= 0; i< num; i++){
		if(*max< str[i]){
			max= &str[i];
		}
    }
}

void minimum(int str[], int *min){
    
    int i;

    min= &str[0];

	for(i= 0; i< 50000; i++){
		if(*min< str[i]){
			min= &str[i];
		}
    }
}

void average(int str[], double *ave){

    int i;
    int total= 0;

	for(i= 0; i< 50000; i++){
        total+= str[i];
    }

    *ave= total/ i;
}
