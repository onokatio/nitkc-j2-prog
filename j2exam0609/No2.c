#include <stdio.h>

int calc_accelerator(int kmh);

int main(void)
{
  int kmh;
  int accel;

  printf("speed=");
  scanf("%d", &kmh);
  
  accel = calc_accelerator(kmh);
  printf("accel=%d\n", accel);

  return 0;
}

int calc_accelerator(int kmh)
{
  /* write your code here. */
	if(kmh < 30) return 100;
	if(kmh < 50) return 50;
	return 0;
}
