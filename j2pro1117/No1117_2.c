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
  char *target;
  int num;

  srand((unsigned)time(NULL));
  
  getWords(words);
  
  /* (1) */
  /*  1500の単語の中から単語をランダムに1個出力する．*/
  // 以下の2行を削除して，ここに記述する．
  //printf("words[0]=%s\n", words[0]);
  //printf("\n");
  srand((unsigned)time(NULL));
  num=rand()%1500;
  printf("choice word=%s\n\n",words[num]);

  /* (2) */
  printf("please writeing to find words.\n\n");
  scanf("%s",target);
  num = findWord(words, target);
  printf("num=%d\n", num);

  return 0;
}

int findWord(char words[][256], char target[])
{
  int i=0,k=0,flag=0;
  int len;
  
  //printf("-- findWord() --\n");
  /*for (i=0; i<3; i++) {
    printf("%s\n", words[9+i]);
    }
    printf("\n");*/
  for(k=0;k<1500;k++){
    while(words[k][i]!='\0' && target[i]!='\0'){
      if(words[k][i]!=target[i]){
	flag=1;
	break;
      }
      i++;
    }
    i=0;
    if(flag!=1){
      printf("%s\n%s",words[k],target);
      break;
    }
    flag=0;
  }
  if(k!=1500){
    printf("target=%s\n", target);
    len = strlen(target);
    printf("len=%d\n", len);
    printf("words[9]=\n");
    for(i=0;i<len;i++){
      printf("%c\n", words[k][i]);
    }
    return k;
  }


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

  fclose(fp);
}
/* --- 注意 --- */
