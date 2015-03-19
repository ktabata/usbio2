SRC = main.c usbio.c usbio.h

usbio: $(SRC)
	gcc -g3 -gdwarf-2 -o $@ $(SRC) -lusb

.PHONY: clean
clean:
	rm -f usbio *~
