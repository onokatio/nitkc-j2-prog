#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

void initialize(char array[SIZE]);
void disp_array(char array[SIZE]);

int main(void){
  char *array;

	srand((unsigned int)time(NULL));

  /* mallocを使ってメモリ（配列）を動的確保 */
  array = (char *)malloc(sizeof(char)*SIZE + 1);
  
  initialize(array);

  disp_array(array);

  return 0;
}

void initialize(char array[SIZE]){
  int i;
  for (i=0; i<SIZE; i++) array[i] = rand()%26 + 'a';
}

void disp_array(char array[SIZE]){
  int i;
	int stage = 0,count = 0;
	char oeda[4] = "oeda";

  for (i=0; i<SIZE; i++){
		//if(array[i] == oeda[stage]){
		//	stage++;
		//}else{
		//	stage = 0;
		//}
		stage = (array[i] == oeda[stage])? stage+1 : 0;
		if(stage == 4) count++,stage=0;

		printf("%c", array[i]);
	}
  printf("\n%d\n",count);
}
