#include "niusb6501.h"
#include <time.h>

int main(void)
{ 
  unsigned char  uc_data = 0xFF;

  init_device();
  set_io_mode(0xFF, 0xFF, 0xFF);

	while (1){
		write_port(0, uc_data);    
		uc_data = ~uc_data;
		sleep(1);
	}

}
