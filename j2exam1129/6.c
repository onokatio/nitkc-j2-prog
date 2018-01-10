#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM 1500

void getWords(char words[][256]);
int findWord(char words[][256], char target[]);

int main(void)
{
  char words[NUM][256];
  char target[] = "product";
  int num;
	int j,i;
	char last='a';
	int lastnum;
	int keta;
	char mywords[NUM][256];

  srand((unsigned)time(NULL));
  
  getWords(words);
  
  /* (1) */
  /*  1500の単語の中から単語をランダムに1個出力する．*/
  // 以下の2行を削除して，ここに記述する．
  printf("words[0]=%s\n", words[rand()%1500]);
  printf("\n");

  /* (2) */
  //num = findWord(words, target);
  //printf("num=%d\n", num);
	for(keta=0;keta<20;keta++){
		for(i=0;i<1500;i++){
			if(words[i][0] == '0') break;
			if(words[i][keta] < 'a' || words[i][keta] > 'z'){
				words[i][keta] = 'a';
			}
			if(words[i][keta] < last){
				words[i][0] = '0';
			}
			if(words[i][keta] >= last){
				keta = words[i][keta];
				lastnum = i;
			}
		}
	}
	for(i=0;i<1500;i++){
		if (words[i][0] == '0') break;
  	printf("words[i]=%s\n", words[i]);
	}
	printf("%d,lastnum");

  return 0;
}

int findWord(char words[][256], char target[])
{
  int i;
  int len;
  
  printf("-- findWord() --\n");
  for (i=0; i<3; i++) {
    printf("%s\n", words[9+i]);
  }
  printf("\n");

  printf("target=%s\n", target);
  len = strlen(target);
  printf("len=%d\n", len);
  printf("words[9]=\n");
  printf("%c\n", words[9][0]);
  printf("%c\n", words[9][1]);
  printf("%c\n", words[9][2]);
  printf("\n");

  return -1;
}

/* --- 注意 --- */
/* この関数を変更する必要はない．*/
/* この関数を理解しなくてもよい．*/
/* 単語ファイルからデータを読み込む */
void getWords(char words[][256])
{
  FILE *fp;
  int i;

  if ((fp=fopen("words1500.dat", "r"))==NULL) {
    printf("file open error.\n");
    exit(1);
  }
  
  i=0;
  while (fscanf(fp, "%s", words[i++])!=EOF);
}
/* --- 注意 --- */
