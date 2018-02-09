#include <stdio.h>
#include <stdlib.h>

#define NUM 500
#define MAX 1000

void initialize(int data[]);
void disp_top10(int data[]);
double calc_aveg(int data[]);
void swap(int *a, int *b);
void sort(int data[]);
int calc_mid(int data[]);
int calc_mostseen(int data[]);

int main(void)
{
  int data[NUM];
  double median;
  int mode;
  int prime_ct;
  
  srand(207);
  
  initialize(data);
	
  disp_top10(data);

	printf("(1) aveg= %f\n\n",calc_aveg(data));

	printf("(2)\n");
	sort(data);
  disp_top10(data);

	printf("(3) middle = %d\n",calc_mid(data));
	printf("(3) most seen number = %d\n",calc_mostseen(data));
  
  return 0;
}

int calc_mostseen(int data[]){
	int calc[MAX];
	int i;
	int max = 0;
	for(i=0; i<MAX; i++){
		calc[i] = 0;
	}
	for(i=0; i<NUM; i++){
		calc[data[i]]++;
	}
	for(i=0; i<MAX; i++){
		if(calc[i] > calc[max]){
			max = i;
		}
	}
	return max;
}

int calc_mid(int data[]){
	if(NUM % 2 == 0){
		return (data[NUM/2] + data[NUM/2 - 1])/2;
	}else{
		return data[(NUM+1)/2];
	}
}

void sort(int data[]){
	int i,j;
	for(i=0; i<NUM-1; i++){
		for(j=NUM-1; j>i; j--){
			if(data[j-1]>data[j]){
				swap(&data[j-1], &data[j]);
			}
		}
	}
}
double calc_aveg(int data[]){
	int sum = 0;
	int i;
	for(i=0; i<NUM; i++){
		sum += data[i];
	}
	return (double)sum/NUM;
}

void initialize(int data[])
{
  int i;
  
  for (i=0; i<NUM; i++) {
    data[i] = rand()%MAX;
  }
}

void disp_top10(int data[])
{
  int i;
  
  for (i=0; i<10; i++) {
    printf("%2d %3d\n", i, data[i]);
  }
  printf("\n");
}
void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
