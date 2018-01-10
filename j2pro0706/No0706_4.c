#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000
#define WORD 4

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
	int count = 0;
	char words[WORD+1][50] = {"oeda","and","kisarazu","saikounandayone"};

  for (i=0; i<SIZE; i++){
		stage = ( array[i] == words[0][stage] ) ? stage+1 : 0 ;
		if(words[0][stage]=='\0') count++,stage=0;

		printf("%c", array[i]);
	}
  printf("\n%d\n",count);
}
