/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_6B2_H
#define IS_CIS_6B2_H

#include "is-cis.h"

#define EXT_CLK_Mhz (26)

#define SENSOR_6B2_MAX_WIDTH		(1920 + 16)
#define SENSOR_6B2_MAX_HEIGHT		(1080 + 10)

/* TODO: Check below values are valid */
#define SENSOR_6B2_FINE_INTEGRATION_TIME_MIN                0x1C5
#define SENSOR_6B2_FINE_INTEGRATION_TIME_MAX                0x1C5
#define SENSOR_6B2_COARSE_INTEGRATION_TIME_MIN              0x1
#define SENSOR_6B2_COARSE_INTEGRATION_TIME_MAX_MARGIN       0x4

#define USE_GROUP_PARAM_HOLD	(1)

#endif

