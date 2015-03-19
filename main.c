/*
 * Linux userspace driver for USB-IO2.0(AKI)
 * Copyright (c) 2014, TABATA Keiichi. All rights reserved.
 */

#include "usbio.h"

/*
 * Example usage
 */
int
main(int argc, char **argv)
{
	usbio_t hd;
	uint8_t recv;

	/* Open target device. */
	hd = usbio_init(false);
	if (hd == NULL)
		return 1;

	/* Digital I/O. */
	usbio_read(hd, &recv);
	//usbio_write(hd, 0x01, 0x01);
	//usbio_read_write(hd, &recv, 0x01, 0x01);

	/* Close target device. */
	usbio_cleanup(hd, true);

	return 0;
}
