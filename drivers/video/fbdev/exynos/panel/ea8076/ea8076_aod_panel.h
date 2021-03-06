/*
 * linux/drivers/video/fbdev/exynos/panel/ea8076/ea8076_aod_panel.h
 *
 * Header file for AOD Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __EA8076_AOD_PANEL_H__
#define __EA8076_AOD_PANEL_H__

#include "ea8076_aod.h"

static u8 EA8076_AOD_KEY1_ENABLE[] = { 0x9F, 0x5A, 0x5A };
static u8 EA8076_AOD_KEY1_DISABLE[] = { 0x9F, 0xA5, 0xA5 };

static u8 EA8076_AOD_KEY2_ENABLE[] = { 0xF0, 0x5A, 0x5A };
static u8 EA8076_AOD_KEY2_DISABLE[] = { 0xF0, 0xA5, 0xA5 };

static u8 EA8076_AOD_KEY3_ENABLE[] = { 0xFC, 0x5A, 0x5A };
static u8 EA8076_AOD_KEY3_DISABLE[] = { 0xFC, 0xA5, 0xA5 };

static DEFINE_STATIC_PACKET(ea8076_aod_l1_key_enable, DSI_PKT_TYPE_WR, EA8076_AOD_KEY1_ENABLE, 0);
static DEFINE_STATIC_PACKET(ea8076_aod_l1_key_disable, DSI_PKT_TYPE_WR,EA8076_AOD_KEY1_DISABLE, 0);

static DEFINE_STATIC_PACKET(ea8076_aod_l2_key_enable, DSI_PKT_TYPE_WR, EA8076_AOD_KEY2_ENABLE, 0);
static DEFINE_STATIC_PACKET(ea8076_aod_l2_key_disable, DSI_PKT_TYPE_WR,EA8076_AOD_KEY2_DISABLE, 0);

static DEFINE_STATIC_PACKET(ea8076_aod_l3_key_enable, DSI_PKT_TYPE_WR, EA8076_AOD_KEY3_ENABLE, 0);
static DEFINE_STATIC_PACKET(ea8076_aod_l3_key_disable, DSI_PKT_TYPE_WR, EA8076_AOD_KEY3_DISABLE, 0);

static DEFINE_PANEL_UDELAY(ea8076_aod_self_spsram_sel_delay, 1);
static DEFINE_PANEL_UDELAY(ea8076_aod_self_mask_checksum_1frame_delay, 16700);
static DEFINE_PANEL_UDELAY(ea8076_aod_self_mask_checksum_2frame_delay, 33400);

static DEFINE_PANEL_KEY(ea8076_aod_l1_key_enable, CMD_LEVEL_1,
	KEY_ENABLE, &PKTINFO(ea8076_aod_l1_key_enable));
static DEFINE_PANEL_KEY(ea8076_aod_l1_key_disable, CMD_LEVEL_1,
	KEY_DISABLE, &PKTINFO(ea8076_aod_l1_key_disable));

static DEFINE_PANEL_KEY(ea8076_aod_l2_key_enable, CMD_LEVEL_2,
	KEY_ENABLE, &PKTINFO(ea8076_aod_l2_key_enable));
static DEFINE_PANEL_KEY(ea8076_aod_l2_key_disable, CMD_LEVEL_2,
	KEY_DISABLE, &PKTINFO(ea8076_aod_l2_key_disable));

static DEFINE_PANEL_KEY(ea8076_aod_l3_key_enable, CMD_LEVEL_3,
	KEY_ENABLE, &PKTINFO(ea8076_aod_l3_key_enable));
static DEFINE_PANEL_KEY(ea8076_aod_l3_key_disable, CMD_LEVEL_3,
	KEY_DISABLE, &PKTINFO(ea8076_aod_l3_key_disable));

static struct keyinfo KEYINFO(ea8076_aod_l1_key_enable);
static struct keyinfo KEYINFO(ea8076_aod_l1_key_disable);
static struct keyinfo KEYINFO(ea8076_aod_l2_key_enable);
static struct keyinfo KEYINFO(ea8076_aod_l2_key_disable);
static struct keyinfo KEYINFO(ea8076_aod_l3_key_enable);
static struct keyinfo KEYINFO(ea8076_aod_l3_key_disable);

static struct maptbl ea8076_aod_maptbl[] = {
	[SELF_MASK_CTRL_MAPTBL] = DEFINE_0D_MAPTBL(ea8076_aod_self_mask,
		ea8076_init_self_mask_ctrl, NULL, ea8076_copy_self_mask_ctrl),
};

// --------------------- Image for self mask image ---------------------

static char EA8076_AOD_RESET_SD_PATH[] = {
	0x75,
	0x00,
};
static DEFINE_STATIC_PACKET(ea8076_aod_reset_sd_path, DSI_PKT_TYPE_WR, EA8076_AOD_RESET_SD_PATH, 0);


static char EA8076_AOD_SELF_MASK_SD_PATH[] = {
	0x75,
	0x10,
};
static DEFINE_STATIC_PACKET(ea8076_aod_self_mask_sd_path, DSI_PKT_TYPE_WR, EA8076_AOD_SELF_MASK_SD_PATH, 0);

// --------------------- End of self mask image ---------------------


// --------------------- Image for self mask control ---------------------
#ifdef CONFIG_SELFMASK_FACTORY
static char EA8076_AOD_SELF_MASK_ENA[] = {
	0x7A,
	0x23, 0x09, 0x60, 0x09, 0xF5,
	0x09, 0xF6, 0x0A, 0x8B, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0A, 0x10,
};
#else
static char EA8076_AOD_SELF_MASK_ENA[] = {
	0x7A,
	0x23, 0x00, 0x00, 0x00, 0x95,
	0x07, 0x9E, 0x09, 0x5F, 0x01,
	0x00, 0x07, 0x9E, 0x03, 0x00,
	0x08, 0xCA, 0x0A, 0x10, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0F,
	0xFC, 0x00
};
#endif

static DEFINE_STATIC_PACKET(ea8076_aod_self_mask_ctrl_ena, DSI_PKT_TYPE_WR, EA8076_AOD_SELF_MASK_ENA, 0);
static void *ea8076_aod_self_mask_ena_cmdtbl[] = {
	&KEYINFO(ea8076_aod_l2_key_enable),
	&PKTINFO(ea8076_aod_self_mask_ctrl_ena),
	&KEYINFO(ea8076_aod_l2_key_disable),
};

static char EA8076_AOD_SELF_MASK_DISABLE[] = {
	0x7A,
	0x00,
};
static DEFINE_STATIC_PACKET(ea8076_aod_self_mask_disable, DSI_PKT_TYPE_WR, EA8076_AOD_SELF_MASK_DISABLE, 0);

static void *ea8076_aod_self_mask_dis_cmdtbl[] = {
	&KEYINFO(ea8076_aod_l2_key_enable),
	&PKTINFO(ea8076_aod_self_mask_disable),
	&KEYINFO(ea8076_aod_l2_key_disable),
};
// --------------------- End of self mask control ---------------------


// --------------------- check sum control ----------------------------
static DEFINE_STATIC_PACKET_WITH_OPTION(ea8076_aod_self_mask_img_pkt,
		DSI_PKT_TYPE_WR_SR, EA8076_CRC_SELF_MASK_IMG, 0, PKT_OPTION_SR_ALIGN_16);

static char EA8076_AOD_SELF_MASK_CRC_ON1[] = {
	0xFE,
	0x90,
};
static DEFINE_STATIC_PACKET(ea8076_aod_self_mask_crc_on1, DSI_PKT_TYPE_WR, EA8076_AOD_SELF_MASK_CRC_ON1, 0x09);

static char EA8076_AOD_SELF_MASK_MEM_SEL[] = {
	0xFE,
	0x80,
};
static DEFINE_STATIC_PACKET(ea8076_aod_self_mask_mem_sel, DSI_PKT_TYPE_WR, EA8076_AOD_SELF_MASK_MEM_SEL, 0x3D);

static char EA8076_AOD_SELF_MASK_DBIST_ON[] = {
	0xBF,
	0x01, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00
};
static DEFINE_STATIC_PACKET(ea8076_aod_self_mask_dbist_on, DSI_PKT_TYPE_WR, EA8076_AOD_SELF_MASK_DBIST_ON, 0);

static char EA8076_AOD_SELF_MASK_DBIST_OFF[] = {
	0xBF,
	0x00, 0x07, 0xFF, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00
};
static DEFINE_STATIC_PACKET(ea8076_aod_self_mask_dbist_off, DSI_PKT_TYPE_WR, EA8076_AOD_SELF_MASK_DBIST_OFF, 0);

static char EA8076_AOD_SELF_MASK_ENABLE_FOR_CHECKSUM[] = {
	0x7A,
	0x21, 0x01, 0xF4, 0x02, 0x33,
	0x09, 0x60, 0x09, 0x61, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0A, 0x10, 0xFF,
	0xFF, 0xFF, 0xFF
};

static DEFINE_STATIC_PACKET(ea8076_aod_self_mask_for_checksum, DSI_PKT_TYPE_WR, EA8076_AOD_SELF_MASK_ENABLE_FOR_CHECKSUM, 0);

static char EA8076_AOD_SELF_MASK_RESTORE[] = {
	0x7A,
	0x21, 0x09, 0x60, 0x09, 0xF5,
	0x09, 0xF6, 0x0A, 0x8B, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0A, 0x10, 0x00,
	0x00, 0x00, 0x00

};
static DEFINE_STATIC_PACKET(ea8076_aod_self_mask_restore, DSI_PKT_TYPE_WR, EA8076_AOD_SELF_MASK_RESTORE, 0);

static void *ea8076_aod_self_mask_checksum_cmdtbl[] = {
	&KEYINFO(ea8076_aod_l1_key_enable),
	&KEYINFO(ea8076_aod_l2_key_enable),
	&KEYINFO(ea8076_aod_l3_key_enable),
	&PKTINFO(ea8076_aod_self_mask_crc_on1),
	&PKTINFO(ea8076_aod_self_mask_mem_sel),
	&PKTINFO(ea8076_aod_self_mask_dbist_on),
	&PKTINFO(ea8076_aod_self_mask_disable),
	&DLYINFO(ea8076_aod_self_mask_checksum_1frame_delay),
	&PKTINFO(ea8076_aod_self_mask_sd_path),
	&DLYINFO(ea8076_aod_self_spsram_sel_delay),
	&PKTINFO(ea8076_aod_self_mask_img_pkt),
	&PKTINFO(ea8076_aod_reset_sd_path),
	&DLYINFO(ea8076_aod_self_spsram_sel_delay),
	&PKTINFO(ea8076_aod_self_mask_for_checksum),
	&DLYINFO(ea8076_aod_self_mask_checksum_2frame_delay),
	&ea8076_restbl[RES_SELF_MASK_CHECKSUM],
	&PKTINFO(ea8076_aod_self_mask_restore),
	&PKTINFO(ea8076_aod_self_mask_dbist_off),
	&KEYINFO(ea8076_aod_l3_key_disable),
	&KEYINFO(ea8076_aod_l2_key_disable),
	&KEYINFO(ea8076_aod_l1_key_disable),
};

// --------------------- end of check sum control ----------------------------

#endif //__EA8076_AOD_PANEL_H__
