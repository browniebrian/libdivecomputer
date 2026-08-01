/*
 * libdivecomputer
 *
 * Copyright (C) 2026 Brian Groskamp
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#ifndef DC_SUUNTO_EONSTEEL_H
#define DC_SUUNTO_EONSTEEL_H

#include "common.h"
#include "device.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*
 * Decide whether a dive still needs to be downloaded, based on its
 * fingerprint alone. Returns a non-zero value to skip the dive.
 */
typedef int (*suunto_eonsteel_filter_t) (const unsigned char fingerprint[], unsigned int size, void *userdata);

dc_status_t
suunto_eonsteel_device_set_filter (dc_device_t *device, suunto_eonsteel_filter_t filter, void *userdata);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* DC_SUUNTO_EONSTEEL_H */
