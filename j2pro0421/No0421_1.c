#include <stdio.h>

int main(void)
{
  int i;
  int num=10;
  
//  printf("Input your number = ");
//  scanf("%d", &num);

  i = 0;
  while(i<=num) {
    printf("i=%d: %d\n", i, i*2);
    i++;
  }
  
  return 0;
}
