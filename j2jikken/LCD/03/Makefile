INCLUDE = /home/class/common/NI_USB-6501/include
LIBS    = /home/class/common/NI_USB-6501/lib
CFLAGS  = -g

.c.o:
	gcc $(CFLAGS) -c $< -I$(INCLUDE)

BIN =	LCD_03


ALL: $(BIN)


clean:
	rm -f *.o
	rm -f $(BIN)


LCD_03:	 	LCD_03.o \
		$(LIBS)/niusb6501.o
	gcc -o $@ $^ -lusb

