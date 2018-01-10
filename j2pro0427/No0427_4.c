#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i=0;

  while (i < 20) {
    printf("%d\n", rand()%27+23);
    i++;
  }

  return 0;
}
    
