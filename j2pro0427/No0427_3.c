#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	srand((unsigned)time(NULL));
  printf("%d\n", rand()%6+1);

  return 0;
}
    
