#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int val;

  i = 0;
  while (i < 20) {
    printf("%d\n", rand()%6);
    i++;
  }

  return 0;
}
    
