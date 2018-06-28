/*
 * uMTP Responder
 * Copyright (c) 2018 Viveris Technologies
 *
 * uMTP Responder is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 *
 * uMTP Responder is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 3 for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with uMTP Responder; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/**
 * @file   default_cfg.h
 * @brief  default settings.
 * @author Jean-François DEL NERO <Jean-Francois.DELNERO@viveris.fr>
 */

#ifndef UMTPR_CONF_FILE
#define UMTPR_CONF_FILE   "/etc/umtprd/umtprd.conf"
#endif

#define MAX_PACKET_SIZE 512

#define USB_DEV_VENDOR_ID   0x1D6B   // Linux Foundation
#define USB_DEV_PRODUCT_ID  0x0100   // PTP Gadget

#define USB_DEV_CLASS       0x6      // Still Imaging device
#define USB_DEV_SUBCLASS    0x1      //
#define USB_DEV_PROTOCOL    0x1      //

#define USB_DEV_VERSION     0x3008

#define USB_DEV "/dev/gadget/atmel_usba_udc"

#define USB_EPIN "/dev/gadget/ep1"
#define USB_EPOUT "/dev/gadget/ep2"
#define USB_EPINTIN "/dev/gadget/ep3"

#define MANUFACTURER "Viveris Technologies"
#define PRODUCT "The Viveris Product !"
#define SERIALNUMBER "01234567"

