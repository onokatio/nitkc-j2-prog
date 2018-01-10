#include "niusb6501.h"

int main(void)
{ 
  unsigned char  r_port = 1;
  unsigned char  w_port = 0;
  unsigned char  r_data = 1;

  init_device();
  set_io_mode(0xFF, 0x00, 0xFF);

	while(1){
		r_data = read_port(r_port);
		write_port(w_port, r_data >> 1);
  }
}
