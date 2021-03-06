/*
 * linux/drivers/video/fbdev/exynos/panel/s6e3ha9/s6e3ha9_beyondx_a3_s0_panel_hmd_dimming.h
 *
 * Header file for S6E3HA9 Dimming Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __S6E3HA9_BEYONDX_A3_S0_PANEL_HMD_DIMMING_H__
#define __S6E3HA9_BEYONDX_A3_S0_PANEL_HMD_DIMMING_H__
#include "../dimming.h"
#include "../panel_dimming.h"
#include "s6e3ha9_dimming.h"

/*
 * PANEL INFORMATION
 * LDI : S6E3HA9
 * PANEL : BEYONDX_A3_S0
 */
static s32 beyondx_a3_s0_hmd_rtbl10nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 11, 8, 7, 6, 3, 3, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl11nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 11, 8, 7, 5, 3, 4, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl12nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 6, 5, 3, 3, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl13nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 8, 7, 5, 3, 3, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl14nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 8, 6, 5, 3, 3, 0, 0 };
static s32 beyondx_a3_s0_hmd_rtbl15nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 6, 5, 3, 2, -1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl16nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 11, 8, 7, 5, 3, 2, -1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl17nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 5, 5, 3, 2, -1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl19nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 6, 5, 3, 1, -1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl20nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 6, 5, 3, 2, 0, 0 };
static s32 beyondx_a3_s0_hmd_rtbl21nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 6, 4, 2, 1, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl22nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 5, 5, 4, 3, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl23nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 6, 4, 4, 2, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl25nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 5, 4, 5, 1, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl27nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 9, 6, 6, 4, 5, 2, 3, 0 };
static s32 beyondx_a3_s0_hmd_rtbl29nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 9, 6, 6, 5, 5, 2, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl31nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 7, 5, 5, 5, 3, 3, 0 };
static s32 beyondx_a3_s0_hmd_rtbl33nit[S6E3HA9_NR_TP] = { 0, 0, 0, 9, 9, 6, 6, 5, 5, 3, 3, 0 };
static s32 beyondx_a3_s0_hmd_rtbl35nit[S6E3HA9_NR_TP] = { 0, 0, 0, 9, 10, 6, 5, 4, 5, 3, 3, 0 };
static s32 beyondx_a3_s0_hmd_rtbl37nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 9, 6, 5, 5, 6, 3, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl39nit[S6E3HA9_NR_TP] = { 0, 0, 0, 9, 9, 6, 5, 4, 5, 3, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl41nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 9, 5, 5, 5, 4, 3, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl44nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 9, 5, 4, 5, 4, 3, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl47nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 10, 6, 6, 6, 5, 4, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl50nit[S6E3HA9_NR_TP] = { 0, 0, 0, 9, 9, 5, 5, 5, 5, 4, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl53nit[S6E3HA9_NR_TP] = { 0, 0, 0, 9, 9, 6, 5, 6, 4, 4, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl56nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 9, 5, 5, 6, 5, 5, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl60nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 9, 5, 5, 6, 5, 4, 3, 0 };
static s32 beyondx_a3_s0_hmd_rtbl64nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 8, 5, 4, 6, 5, 5, 4, 0 };
static s32 beyondx_a3_s0_hmd_rtbl68nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 9, 6, 4, 6, 5, 6, 5, 0 };
static s32 beyondx_a3_s0_hmd_rtbl72nit[S6E3HA9_NR_TP] = { 0, 0, 0, 10, 9, 5, 5, 7, 5, 7, 6, 0 };
static s32 beyondx_a3_s0_hmd_rtbl77nit[S6E3HA9_NR_TP] = { 0, 0, 0, 5, 5, 3, 2, 2, 4, 4, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl82nit[S6E3HA9_NR_TP] = { 0, 0, 0, 5, 5, 2, 2, 3, 3, 4, 1, 0 };
static s32 beyondx_a3_s0_hmd_rtbl87nit[S6E3HA9_NR_TP] = { 0, 0, 0, 6, 5, 3, 2, 3, 3, 3, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl93nit[S6E3HA9_NR_TP] = { 0, 0, 0, 6, 5, 2, 2, 3, 3, 4, 2, 0 };
static s32 beyondx_a3_s0_hmd_rtbl99nit[S6E3HA9_NR_TP] = { 0, 0, 0, 6, 5, 3, 3, 4, 3, 4, 4, 0 };
static s32 beyondx_a3_s0_hmd_rtbl105nit[S6E3HA9_NR_TP] = { 0, 0, 0, 6, 5, 2, 2, 4, 4, 5, 5, 0 };

static s32 beyondx_a3_s0_hmd_ctbl10nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 1, -4, 3, 3, -8, -11, 4, -10, -8, 4, -9, -9, 4, -9, -2, 2, -4, -2, 0, -2, 0, 0, 0, -1, 0, 2 };
static s32 beyondx_a3_s0_hmd_ctbl11nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 1, -4, 6, 3, -8, -14, 5, -12, -7, 3, -7, -8, 4, -8, -2, 2, -4, -2, 0, -2, 0, 0, 0, -2, 0, 1 };
static s32 beyondx_a3_s0_hmd_ctbl12nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 1, -4, 4, 3, -8, -14, 5, -12, -6, 4, -8, -7, 3, -7, -4, 2, -5, 0, 0, 0, 0, 0, 0, -1, 0, 1 };
static s32 beyondx_a3_s0_hmd_ctbl13nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 1, -4, 1, 5, -11, -11, 5, -11, -7, 3, -8, -8, 3, -8, -3, 2, -4, -2, 0, -2, 0, 0, 0, -2, 0, 1 };
static s32 beyondx_a3_s0_hmd_ctbl14nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 1, -4, 0, 5, -12, -11, 4, -10, -7, 3, -8, -7, 3, -7, -4, 2, -5, 0, 0, -1, 0, 0, 0, -1, 0, 1 };
static s32 beyondx_a3_s0_hmd_ctbl15nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 1, -4, 0, 5, -10, -10, 5, -10, -7, 4, -8, -5, 3, -7, -3, 2, -4, -1, 0, -1, 0, 0, 0, 0, 0, 3 };
static s32 beyondx_a3_s0_hmd_ctbl16nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, -6, -1, 4, -10, -10, 4, -10, -7, 3, -8, -5, 3, -6, -3, 2, -5, -1, 0, -1, 0, 0, 0, -1, 0, 3 };
static s32 beyondx_a3_s0_hmd_ctbl17nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 1, -4, 0, 5, -12, -10, 4, -10, -8, 4, -9, -6, 3, -6, -2, 2, -4, -1, 0, 0, 0, 0, 0, -1, 0, 3 };
static s32 beyondx_a3_s0_hmd_ctbl19nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 2, -4, -3, 5, -10, -12, 4, -10, -8, 3, -8, -4, 3, -6, -3, 1, -4, 0, 0, -2, 0, 0, 0, -1, 0, 3 };
static s32 beyondx_a3_s0_hmd_ctbl20nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -4, -4, 5, -11, -11, 4, -10, -8, 3, -8, -4, 2, -6, -3, 1, -3, -2, 0, -2, 0, 0, 0, 0, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl21nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 2, -5, -5, 5, -10, -10, 4, -10, -8, 3, -8, -5, 3, -6, -2, 1, -3, 0, 0, -1, 0, 0, 0, 0, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl22nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 2, -5, -5, 5, -10, -10, 4, -10, -7, 3, -8, -4, 2, -6, -3, 1, -4, 0, 0, -1, 0, 0, 0, -2, -1, 4 };
static s32 beyondx_a3_s0_hmd_ctbl23nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 2, -4, -6, 6, -12, -8, 4, -9, -5, 3, -6, -4, 2, -5, -4, 1, -4, 0, 0, -2, 0, 0, 0, -1, -1, 5 };
static s32 beyondx_a3_s0_hmd_ctbl25nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 2, -5, -7, 6, -12, -8, 4, -9, -5, 3, -6, -2, 2, -4, -3, 1, -4, -1, 0, -2, 0, 0, 0, -1, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl27nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 2, -5, -8, 6, -14, -9, 4, -8, -5, 3, -6, -3, 2, -5, -3, 1, -4, 1, 0, -1, 0, 0, 0, -2, -1, 4 };
static s32 beyondx_a3_s0_hmd_ctbl29nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 2, -5, -8, 6, -14, -10, 4, -10, -4, 3, -6, -4, 2, -4, -2, 1, -3, -1, 0, -1, 0, 0, 0, -1, -1, 4 };
static s32 beyondx_a3_s0_hmd_ctbl31nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 3, -7, -10, 6, -13, -7, 3, -8, -5, 3, -6, -4, 2, -5, -2, 1, -3, 0, 0, 0, 0, 0, -1, -1, -1, 5 };
static s32 beyondx_a3_s0_hmd_ctbl33nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 2, -5, -11, 7, -14, -9, 4, -9, -5, 3, -6, -4, 2, -4, -2, 1, -3, -1, 0, -1, 0, 0, -1, -1, -1, 4 };
static s32 beyondx_a3_s0_hmd_ctbl35nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 3, -8, -11, 6, -12, -9, 4, -9, -5, 2, -6, -4, 2, -5, -2, 1, -3, 0, 0, 0, 0, 0, -1, 0, -1, 5 };
static s32 beyondx_a3_s0_hmd_ctbl37nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 2, -5, -11, 7, -14, -8, 3, -8, -4, 2, -5, -5, 2, -5, -2, 1, -3, 0, 0, 0, 0, 0, 0, -1, -1, 4 };
static s32 beyondx_a3_s0_hmd_ctbl39nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 3, -7, -12, 6, -14, -8, 3, -8, -4, 2, -5, -3, 2, -4, -1, 1, -2, 0, 0, 0, 0, 0, 0, -1, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl41nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 2, -4, -10, 7, -14, -9, 4, -8, -4, 2, -5, -4, 1, -4, -3, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl44nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 2, -4, -11, 7, -14, -8, 3, -8, -4, 2, -4, -4, 2, -4, 0, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 3 };
static s32 beyondx_a3_s0_hmd_ctbl47nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 3, -8, -12, 6, -14, -9, 4, -8, -4, 2, -5, -4, 1, -4, -2, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 3 };
static s32 beyondx_a3_s0_hmd_ctbl50nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 3, -8, -10, 6, -12, -10, 4, -9, -3, 2, -4, -5, 1, -4, -1, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 3 };
static s32 beyondx_a3_s0_hmd_ctbl53nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 3, -8, -12, 7, -14, -8, 3, -8, -2, 1, -4, -4, 2, -4, -2, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl56nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 2, -5, -12, 6, -14, -8, 4, -8, -3, 1, -4, -4, 2, -4, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl60nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 2, -6, -13, 6, -14, -9, 3, -8, -3, 2, -4, -4, 1, -4, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 4 };
static s32 beyondx_a3_s0_hmd_ctbl64nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 2, -5, -13, 6, -14, -8, 3, -8, -3, 1, -4, -3, 1, -3, -2, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl68nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 3, -6, -14, 6, -14, -7, 2, -6, -3, 1, -4, -5, 1, -4, -1, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl72nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 2, -6, -14, 6, -14, -8, 3, -7, -3, 1, -3, -5, 1, -4, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl77nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 3, -7, -11, 6, -12, -5, 2, -6, -2, 0, -2, -3, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 4 };
static s32 beyondx_a3_s0_hmd_ctbl82nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 3, -8, -11, 5, -12, -4, 2, -5, -1, 1, -3, -2, 1, -2, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 4 };
static s32 beyondx_a3_s0_hmd_ctbl87nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 2, -5, -12, 6, -13, -3, 2, -4, -1, 1, -2, -3, 1, -2, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 5 };
static s32 beyondx_a3_s0_hmd_ctbl93nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 3, -8, -10, 5, -11, -4, 2, -5, -2, 0, -2, -2, 1, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 4 };
static s32 beyondx_a3_s0_hmd_ctbl99nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 3, -7, -10, 5, -12, -3, 2, -4, -1, 0, -2, -4, 1, -2, 0, 0, -1, 1, 0, 1, 0, 0, 0, 0, -1, 4 };
static s32 beyondx_a3_s0_hmd_ctbl105nit[S6E3HA9_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 3, -7, -9, 5, -11, -3, 2, -4, 0, 1, -2, -3, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 4 };

static struct dimming_lut beyondx_a3_s0_hmd_dimming_lut[] = {
	DIM_LUT_V0_INIT(10, 46, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl10nit, beyondx_a3_s0_hmd_ctbl10nit),
	DIM_LUT_V0_INIT(11, 50, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl11nit, beyondx_a3_s0_hmd_ctbl11nit),
	DIM_LUT_V0_INIT(12, 55, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl12nit, beyondx_a3_s0_hmd_ctbl12nit),
	DIM_LUT_V0_INIT(13, 60, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl13nit, beyondx_a3_s0_hmd_ctbl13nit),
	DIM_LUT_V0_INIT(14, 64, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl14nit, beyondx_a3_s0_hmd_ctbl14nit),
	DIM_LUT_V0_INIT(15, 68, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl15nit, beyondx_a3_s0_hmd_ctbl15nit),
	DIM_LUT_V0_INIT(16, 72, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl16nit, beyondx_a3_s0_hmd_ctbl16nit),
	DIM_LUT_V0_INIT(17, 76, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl17nit, beyondx_a3_s0_hmd_ctbl17nit),
	DIM_LUT_V0_INIT(19, 85, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl19nit, beyondx_a3_s0_hmd_ctbl19nit),
	DIM_LUT_V0_INIT(20, 89, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl20nit, beyondx_a3_s0_hmd_ctbl20nit),
	DIM_LUT_V0_INIT(21, 93, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl21nit, beyondx_a3_s0_hmd_ctbl21nit),
	DIM_LUT_V0_INIT(22, 97, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl22nit, beyondx_a3_s0_hmd_ctbl22nit),
	DIM_LUT_V0_INIT(23, 101, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl23nit, beyondx_a3_s0_hmd_ctbl23nit),
	DIM_LUT_V0_INIT(25, 109, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl25nit, beyondx_a3_s0_hmd_ctbl25nit),
	DIM_LUT_V0_INIT(27, 117, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl27nit, beyondx_a3_s0_hmd_ctbl27nit),
	DIM_LUT_V0_INIT(29, 125, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl29nit, beyondx_a3_s0_hmd_ctbl29nit),
	DIM_LUT_V0_INIT(31, 132, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl31nit, beyondx_a3_s0_hmd_ctbl31nit),
	DIM_LUT_V0_INIT(33, 143, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl33nit, beyondx_a3_s0_hmd_ctbl33nit),
	DIM_LUT_V0_INIT(35, 151, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl35nit, beyondx_a3_s0_hmd_ctbl35nit),
	DIM_LUT_V0_INIT(37, 160, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl37nit, beyondx_a3_s0_hmd_ctbl37nit),
	DIM_LUT_V0_INIT(39, 168, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl39nit, beyondx_a3_s0_hmd_ctbl39nit),
	DIM_LUT_V0_INIT(41, 180, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl41nit, beyondx_a3_s0_hmd_ctbl41nit),
	DIM_LUT_V0_INIT(44, 193, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl44nit, beyondx_a3_s0_hmd_ctbl44nit),
	DIM_LUT_V0_INIT(47, 204, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl47nit, beyondx_a3_s0_hmd_ctbl47nit),
	DIM_LUT_V0_INIT(50, 215, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl50nit, beyondx_a3_s0_hmd_ctbl50nit),
	DIM_LUT_V0_INIT(53, 228, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl53nit, beyondx_a3_s0_hmd_ctbl53nit),
	DIM_LUT_V0_INIT(56, 241, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl56nit, beyondx_a3_s0_hmd_ctbl56nit),
	DIM_LUT_V0_INIT(60, 255, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl60nit, beyondx_a3_s0_hmd_ctbl60nit),
	DIM_LUT_V0_INIT(64, 269, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl64nit, beyondx_a3_s0_hmd_ctbl64nit),
	DIM_LUT_V0_INIT(68, 282, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl68nit, beyondx_a3_s0_hmd_ctbl68nit),
	DIM_LUT_V0_INIT(72, 295, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl72nit, beyondx_a3_s0_hmd_ctbl72nit),
	DIM_LUT_V0_INIT(77, 224, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl77nit, beyondx_a3_s0_hmd_ctbl77nit),
	DIM_LUT_V0_INIT(82, 239, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl82nit, beyondx_a3_s0_hmd_ctbl82nit),
	DIM_LUT_V0_INIT(87, 254, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl87nit, beyondx_a3_s0_hmd_ctbl87nit),
	DIM_LUT_V0_INIT(93, 267, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl93nit, beyondx_a3_s0_hmd_ctbl93nit),
	DIM_LUT_V0_INIT(99, 279, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl99nit, beyondx_a3_s0_hmd_ctbl99nit),
	DIM_LUT_V0_INIT(105, 293, GAMMA_2_15, beyondx_a3_s0_hmd_rtbl105nit, beyondx_a3_s0_hmd_ctbl105nit),
};

static u8 beyondx_a3_s0_hmd_dimming_gamma_table[S6E3HA9_HMD_NR_LUMINANCE][S6E3HA9_GAMMA_CMD_CNT - 1];
static u8 beyondx_a3_s0_hmd_dimming_aor_table[S6E3HA9_HMD_NR_LUMINANCE][2] = {
	{ 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 },
	{ 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 },
	{ 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 }, { 0x09, 0x93 },
	{ 0x09, 0x93 }, { 0x08, 0x61 }, { 0x08, 0x61 }, { 0x08, 0x61 }, { 0x08, 0x61 }, { 0x08, 0x61 }, { 0x08, 0x61 },
};

static struct maptbl beyondx_a3_s0_hmd_dimming_param_maptbl[MAX_DIMMING_MAPTBL] = {
#ifdef CONFIG_SUPPORT_HMD
	[DIMMING_GAMMA_MAPTBL] = DEFINE_2D_MAPTBL(beyondx_a3_s0_hmd_dimming_gamma_table, init_hmd_gamma_table, getidx_dimming_maptbl, copy_common_maptbl),
	[DIMMING_AOR_MAPTBL] = DEFINE_2D_MAPTBL(beyondx_a3_s0_hmd_dimming_aor_table, init_hmd_aor_table, getidx_dimming_maptbl, copy_common_maptbl),
#endif
};

static unsigned int beyondx_a3_s0_hmd_brt_tbl[S6E3HA9_HMD_NR_LUMINANCE] = {
	BRT(26), BRT(29), BRT(31), BRT(33), BRT(36), BRT(38), BRT(41), BRT(46), BRT(48), BRT(50),
	BRT(53), BRT(55), BRT(60), BRT(65), BRT(70), BRT(75), BRT(80), BRT(84), BRT(89), BRT(94),
	BRT(99), BRT(106), BRT(114), BRT(121), BRT(128), BRT(135), BRT(145), BRT(155), BRT(165), BRT(174),
	BRT(186), BRT(199), BRT(211), BRT(225), BRT(240), BRT(254), BRT(255),
};

static unsigned int beyondx_a3_s0_hmd_lum_tbl[S6E3HA9_HMD_NR_LUMINANCE] = {
	10, 11, 12, 13, 14, 15, 16, 17, 19, 20,
	21, 22, 23, 25, 27, 29, 31, 33, 35, 37,
	39, 41, 44, 47, 50, 53, 56, 60, 64, 68,
	72, 77, 82, 87, 93, 99, 105,
};

static struct brightness_table s6e3ha9_beyondx_a3_s0_panel_hmd_brightness_table = {
	.brt = beyondx_a3_s0_hmd_brt_tbl,
	.sz_brt = ARRAY_SIZE(beyondx_a3_s0_hmd_brt_tbl),
	.lum = beyondx_a3_s0_hmd_lum_tbl,
	.sz_lum = ARRAY_SIZE(beyondx_a3_s0_hmd_lum_tbl),
	.sz_ui_lum = S6E3HA9_HMD_NR_LUMINANCE,
	.sz_hbm_lum = 0,
	.sz_ext_hbm_lum = 0,
	.brt_to_step = beyondx_a3_s0_hmd_brt_tbl,
	.sz_brt_to_step = ARRAY_SIZE(beyondx_a3_s0_hmd_brt_tbl),
};

#if defined(__PANEL_NOT_USED_VARIABLE__)
static struct panel_dimming_info s6e3ha9_beyondx_a3_s0_preliminary_panel_hmd_dimming_info = {
	.name = "s6e3ha9_beyondx_a3_s0_preliminary_hmd",
	.dim_init_info = {
		.name = "s6e3ha9_beyondx_a3_s0_preliminary_hmd",
		.nr_tp = S6E3HA9_NR_TP,
		.tp = s6e3ha9_beyond_tp,
		.nr_luminance = S6E3HA9_HMD_NR_LUMINANCE,
		.vregout = 114085069LL,	/* 6.8 * 2^24 */
		.vref = 16777216LL,	/* 1.0 * 2^24 */
		.bitshift = 24,
		.vt_voltage = {
			0, 24, 48, 72, 96, 120, 144, 168, 192, 216,
			276, 296, 316, 336, 356, 372,
		},
		.v0_voltage = {
			0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
			120, 132, 144, 156, 168, 180,
		},
		.target_luminance = S6E3HA9_BEYOND_HMD_TARGET_LUMINANCE,
		.target_gamma = 220,
		.dim_lut = beyondx_a3_s0_hmd_dimming_lut,
	},
	.target_luminance = S6E3HA9_BEYOND_HMD_TARGET_LUMINANCE,
	.nr_luminance = S6E3HA9_HMD_NR_LUMINANCE,
	.hbm_target_luminance = -1,
	.nr_hbm_luminance = 0,
	.extend_hbm_target_luminance = -1,
	.nr_extend_hbm_luminance = 0,
	.brt_tbl = &s6e3ha9_beyondx_a3_s0_panel_hmd_brightness_table,
	/* dimming parameters */
	.dimming_maptbl = beyondx_a3_s0_hmd_dimming_param_maptbl,
	.dim_flash_on = false,	/* read dim flash when probe or not */
};
#endif

static struct panel_dimming_info s6e3ha9_beyondx_a3_s0_panel_hmd_dimming_info = {
	.name = "s6e3ha9_beyondx_a3_s0_hmd",
	.dim_init_info = {
		.name = "s6e3ha9_beyondx_a3_s0_hmd",
		.nr_tp = S6E3HA9_NR_TP,
		.tp = s6e3ha9_beyond_tp,
		.nr_luminance = S6E3HA9_HMD_NR_LUMINANCE,
		.vregout = 114085069LL,	/* 6.8 * 2^24 */
		.vref = 16777216LL,	/* 1.0 * 2^24 */
		.bitshift = 24,
		.vt_voltage = {
			0, 24, 48, 72, 96, 120, 144, 168, 192, 216,
			276, 296, 316, 336, 356, 372,
		},
		.v0_voltage = {
			0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
			120, 132, 144, 156, 168, 180,
		},
		.target_luminance = S6E3HA9_BEYOND_HMD_TARGET_LUMINANCE,
		.target_gamma = 220,
		.dim_lut = beyondx_a3_s0_hmd_dimming_lut,
	},
	.target_luminance = S6E3HA9_BEYOND_HMD_TARGET_LUMINANCE,
	.nr_luminance = S6E3HA9_HMD_NR_LUMINANCE,
	.hbm_target_luminance = -1,
	.nr_hbm_luminance = 0,
	.extend_hbm_target_luminance = -1,
	.nr_extend_hbm_luminance = 0,
	.brt_tbl = &s6e3ha9_beyondx_a3_s0_panel_hmd_brightness_table,
	/* dimming parameters */
	.dimming_maptbl = beyondx_a3_s0_hmd_dimming_param_maptbl,
	.dim_flash_on = true,	/* read dim flash when probe or not */
};
#endif /* __S6E3HA9_BEYONDX_A3_S0_PANEL_HMD_DIMMING_H__ */
