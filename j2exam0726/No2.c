#include <stdio.h>

void disp_string(char str[]);
void disp_string_odd(char str[]);
void disp_string_diagonal(char str[]);
void disp_word(char str[]);

int main(void)
{
  char str[] = "What time is it now?";

  printf("(1)\n");
  disp_string(str);

  printf("(2)\n");
  disp_string_odd(str);
  
  printf("(3)\n");
  disp_string_diagonal(str);
  
  printf("(4)\n");
  disp_word(str);
  
  
  return 0;
}

// (1)
void disp_string(char str[]){
	printf("%s\n",str);  
}

// (2)
void disp_string_odd(char str[]){
	int i;

	for( i = 0; str[i] != '\0'; i++ ){
		if(i%2){
			printf(" ");
		}else{
			printf("%c",str[i]);
		}
	}

	printf("\n");

}

// (3)
void disp_string_diagonal(char str[]){
	int i,j;
	for( i = 0; str[i] != '\0'; i++){
		for( j = 0; j < i; j++){
			printf(" ");
		}
		printf("%c\n",str[i]);
	}

	printf("\n");
 
}

// (4)
void disp_word(char str[]){
	int num,i,j;

	printf("Input a word number=");
	scanf("%d",&num);

	for( i = 0,j = 1; (str[i] != '\0' && j != num ); i++ ){
		if(str[i]==' ') j++;
	}
	for( ; (str[i] != '\0' && str[i] != ' ' ); i++ ){
		printf("%c",str[i]);
	}
  
	printf("\n");
}
