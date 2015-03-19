/*
 * Linux userspace driver for USB-IO2.0(AKI)
 * Copyright (c) 2014, TABATA Keiichi. All rights reserved.
 */

#ifndef _USBIO_H_
#define _USBIO_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/*
 * External interface
 */

typedef struct usbio *usbio_t;

usbio_t usbio_init(bool reset);

void usbio_cleanup(usbio_t hd, bool reset);

bool usbio_read(usbio_t hd, uint8_t *recv_data);

bool usbio_write(usbio_t hd, uint8_t send_data, uint8_t send_mask);

bool usbio_read_write(usbio_t hd, uint8_t *recv_data, uint8_t send_data,
    uint8_t send_mask);

#endif
