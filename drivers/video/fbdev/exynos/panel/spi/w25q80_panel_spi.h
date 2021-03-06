#ifndef __W25Q80_PANEL_SPI_H__
#define __W25Q80_PANEL_SPI_H__

#include "../panel.h"
#include "../panel_spi.h"

static struct spi_cmd w25q80_write_enable = {
	.reg = 0x06,
};

static struct spi_cmd w25q80_write_disable = {
	.reg = 0x04,
};

static struct spi_cmd w25q80_sreg1_init_set = {
	.reg = 0x01,
	.wlen = 1, .wval = (u8[]){ 0x00 },
	.delay_after_usecs = 30000
};

static struct spi_cmd w25q80_sreg1_init_check = {
	.reg = 0x05,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x5C }, .rval = (u8[]){ 0x00 },
};

static struct spi_cmd w25q80_sreg1_exit_set = {
	.reg = 0x01,
	.wlen = 1, .wval = (u8[]){ 0x5C },
	.delay_after_usecs = 30000
};

static struct spi_cmd w25q80_sreg1_exit_check = {
	.reg = 0x05,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x5C }, .rval = (u8[]){ 0x5C },
};

static struct spi_cmd w25q80_sreg2_init_set = {
	.reg = 0x31,
	.wlen = 1, .wval = (u8[]){ 0x00 },
	.delay_after_usecs = 30000
};

static struct spi_cmd w25q80_sreg2_init_check = {
	.reg = 0x35,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x02 }, .rval = (u8[]){ 0x00 },
};

static struct spi_cmd w25q80_sreg2_exit_set = {
	.reg = 0x31,
	.wlen = 1, .wval = (u8[]){ 0x02 },
	.delay_after_usecs = 30000
};

static struct spi_cmd w25q80_sreg2_exit_check = {
	.reg = 0x35,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x02 }, .rval = (u8[]){ 0x02 },
};

static struct spi_cmd w25q80_busy_check = {
	.reg = 0x05,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x01 }, .rval = (u8[]){ 0x00 },
//	.delay_after_usecs = 1000
};

#if defined(__PANEL_NOT_USED_VARIABLE__)
static struct spi_cmd w25q80_delay_15000us = {
	.opt = PANEL_SPI_CMD_OPTION_ONLY_DELAY,
	.delay_before_usecs = 15000
};
#endif

static struct spi_cmd w25q80_erase_4k = {
	.reg = 0x20,
	.opt = PANEL_SPI_CMD_OPTION_ADDR_3BYTE,
};

static struct spi_cmd w25q80_erase_4k_done = {
	.reg = 0x05,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x01 }, .rval = (u8[]){ 0x00 },
	.delay_retry_usecs = 10000
};

static struct spi_cmd w25q80_erase_32k = {
	.reg = 0x52,
	.opt = PANEL_SPI_CMD_OPTION_ADDR_3BYTE,
};

static struct spi_cmd w25q80_erase_32k_done = {
	.reg = 0x05,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x01 }, .rval = (u8[]){ 0x00 },
	.delay_retry_usecs = 20000
};

static struct spi_cmd w25q80_erase_64k = {
	.reg = 0xD8,
	.opt = PANEL_SPI_CMD_OPTION_ADDR_3BYTE,
};

static struct spi_cmd w25q80_erase_64k_done = {
	.reg = 0x05,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x01 }, .rval = (u8[]){ 0x00 },
	.delay_retry_usecs = 30000
};

static struct spi_cmd w25q80_erase_chip = {
	.reg = 0xC7,
};

static struct spi_cmd w25q80_erase_chip_done = {
	.reg = 0x05,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x01 }, .rval = (u8[]){ 0x00 },
	.delay_retry_usecs = 50000
};

static struct spi_cmd w25q80_read = {
	.reg = 0x03,
	.opt = PANEL_SPI_CMD_OPTION_ADDR_3BYTE,
};

static struct spi_cmd w25q80_write = {
	.reg = 0x02,
	.opt = PANEL_SPI_CMD_OPTION_ADDR_3BYTE,
};

static struct spi_cmd w25q80_write_done = {
	.reg = 0x05,
	.opt = PANEL_SPI_CMD_OPTION_READ_COMPARE,
	.rlen = 1, .rmask = (u8[]){ 0x01 }, .rval = (u8[]){ 0x00 },
	.delay_retry_usecs = 500
};

static struct spi_cmd *w25q80_spi_cmd_list[MAX_PANEL_SPI_CMD] = {
	[PANEL_SPI_CMD_FLASH_INIT1] = &w25q80_sreg1_init_set,
	[PANEL_SPI_CMD_FLASH_INIT1_DONE] = &w25q80_sreg1_init_check,
	[PANEL_SPI_CMD_FLASH_EXIT1] = &w25q80_sreg1_exit_set,
	[PANEL_SPI_CMD_FLASH_EXIT1_DONE] = &w25q80_sreg1_exit_check,
	[PANEL_SPI_CMD_FLASH_INIT2] = &w25q80_sreg2_init_set,
	[PANEL_SPI_CMD_FLASH_INIT2_DONE] = &w25q80_sreg2_init_check,
	[PANEL_SPI_CMD_FLASH_EXIT2] = &w25q80_sreg2_exit_set,
	[PANEL_SPI_CMD_FLASH_EXIT2_DONE] = &w25q80_sreg2_exit_check,
	[PANEL_SPI_CMD_FLASH_BUSY_CLEAR] = &w25q80_busy_check,
	[PANEL_SPI_CMD_FLASH_READ] = &w25q80_read,
	[PANEL_SPI_CMD_FLASH_WRITE_ENABLE] = &w25q80_write_enable,
	[PANEL_SPI_CMD_FLASH_WRITE_DISABLE] = &w25q80_write_disable,
	[PANEL_SPI_CMD_FLASH_WRITE] = &w25q80_write,
	[PANEL_SPI_CMD_FLASH_WRITE_DONE] = &w25q80_write_done,
	[PANEL_SPI_CMD_FLASH_ERASE_4K] = &w25q80_erase_4k,
	[PANEL_SPI_CMD_FLASH_ERASE_32K] = &w25q80_erase_32k,
	[PANEL_SPI_CMD_FLASH_ERASE_64K] = &w25q80_erase_64k,
	[PANEL_SPI_CMD_FLASH_ERASE_CHIP] = &w25q80_erase_chip,
	[PANEL_SPI_CMD_FLASH_ERASE_4K_DONE] = &w25q80_erase_4k_done,
	[PANEL_SPI_CMD_FLASH_ERASE_32K_DONE] = &w25q80_erase_32k_done,
	[PANEL_SPI_CMD_FLASH_ERASE_64K_DONE] = &w25q80_erase_64k_done,
	[PANEL_SPI_CMD_FLASH_ERASE_CHIP_DONE] = &w25q80_erase_chip_done,
};

static struct spi_data w25q80_spi_data = {
	.spi_addr = 0x0,
	.compat_mask = 0xFF0000,
	.compat_id = 0xEF0000,
	.vendor = "Winbond",
	.model = "W25Q80",
	.speed_hz = 12500000,
	.erase_type = PANEL_SPI_ERASE_TYPE_BLOCK,
	.cmd_list = w25q80_spi_cmd_list,
	.byte_per_write = 256,
	.byte_per_read = 2048,
};
#endif
