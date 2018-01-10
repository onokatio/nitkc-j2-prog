#include <stdio.h>

int main(void)
{
  int i=0,j=1;
  int num=10;
  
  while(i<=num) {
    printf("i=%2d: %5d\n", i, j);
    i++;
		j*=2;
  }
  
  return 0;
}
