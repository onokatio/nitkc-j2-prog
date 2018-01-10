#include "niusb6501.h"
#include <time.h>

int main(void)
{ 
  int i;
  unsigned char  uc_port = 0;
  unsigned char  uc_data = 0xFF;

  init_device();
  set_io_mode(0xFF, 0xFF, 0xFF);

  write_port(uc_port, uc_data);    

	while(uc_data!=0){
		uc_data = uc_data << 1 ;
    write_port(uc_port, uc_data);    
		sleep(1);
  }

	write_port(uc_port, 0xFF);    

  return 0;
}
