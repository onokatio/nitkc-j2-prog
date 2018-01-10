#include "niusb6501.h"

#define PIOA 0
#define PIOB 1

void clear_display(void);
void cursor_at_home(void);
void function_set(void);
void display_onoff_control(void);
void entrymode_set(void);
void data_write(unsigned char a);

int main(void)
{
  unsigned char  uc_port;
  unsigned char  uc_data;
	int i;

  init_device();
  set_io_mode(0xFF, 0xFF, 0xFF);

  clear_display();
  cursor_at_home();
  function_set();
  display_onoff_control();
  entrymode_set();

		printf("input > ");
		scanf("%d",&i);
		i += '0';
  	clear_display();
  	cursor_at_home();
	  data_write(i);
  return 0;
}

void clear_display(void)
{
  write_port(PIOB, 0x04);
  write_port(PIOA, 0x01);
  write_port(PIOB, 0x00);
  usleep(1640);
}

void cursor_at_home(void)
{
  write_port(PIOB, 0x04);
  write_port(PIOA, 0x02);
  write_port(PIOB, 0x00);
  usleep(1640);
}

void function_set(void)
{
  write_port(PIOB, 0x04);
  write_port(PIOA, 0x30);
  write_port(PIOB, 0x00);
  usleep(40);
}

void display_onoff_control(void)
{
  write_port(PIOB, 0x04);
  write_port(PIOA, 0x0e);
  write_port(PIOB, 0x00);
  usleep(40);
}

void entrymode_set(void)
{
  write_port(PIOB, 0x04);
  write_port(PIOA, 0x06);
  write_port(PIOB, 0x00);
  usleep(40);
}

void data_write(unsigned char a)
{
  write_port(PIOB, 0x06);
  write_port(PIOA, a); // 'A'
  write_port(PIOB, 0x00);
  usleep(40);
  
  write_port(PIOB, 0x06);
}
