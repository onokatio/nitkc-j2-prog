#include "niusb6501.h"
#include <time.h>

int main(void)
{ 
  int i;
  unsigned char  uc_port = 0;
  unsigned char  uc_data = 0xFF;

  init_device();
  set_io_mode(0xFF, 0xFF, 0xFF);

	printf("input num > ");
	scanf("%d",&i);
	uc_data = ~(unsigned char)i;

	while(1){
    write_port(uc_port, uc_data);    
		uc_data = uc_data << 1 | uc_data >> 7;
		sleep(1);
  }

  return 0;
}
