#include <stdio.h>

int main(void)
{
  int i=0,j=1;
  int num;
  
	printf("input number > ");
	scanf("%d",&num);

  while(i<=num) {
    printf("i=%d: %d\n", i, j);
    i++;
		j*=2;
  }
  
  return 0;
}
