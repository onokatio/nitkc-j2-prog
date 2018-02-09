#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void setData(int x[]);
void dispData(int x[]);
void sort(int array[]);
void swap(int *a, int *b);

int main(void)
{
  int array[NUM];

  setData(array);
  dispData(array);

  /* ここに単純選択ソート（降順）を書く */
  sort(array);

  dispData(array);

  return 0;
}

void sort(int array[]){
	int i, j;
	int max_index;
	for (i=0; i<NUM-1; i++) {
		max_index = i;
		for (j=i+1; j<NUM; j++) {
			if(array[j]>array[max_index]) {
				max_index = j;
			}
		}
		swap(&array[i], &array[max_index]);
  	//dispData(array);
	}
}

void setData(int x[])
{
  int i;

  srand(208);
  
  for (i=0; i<NUM; i++) {
    x[i] = rand()%100;
  }
  
}

void dispData(int x[])
{
  int i;
  
  for (i=0; i<NUM; i++) {
    printf("[%d] = %2d\n", i, x[i]);
  }
  printf("\n");
}

void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
