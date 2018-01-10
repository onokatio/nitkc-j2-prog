#include <stdio.h>

int main(void)
{
  int i, j;
  int key;

  printf("key = ");
  scanf("%d", &key);

  j = key;
  while (j>0) {
    i = 0;
    while (i<j) {
      printf("*");
      i = i + 1;
    }
    printf("\n");
    j = j - 1;
  }

  return 0;
}
  
  

