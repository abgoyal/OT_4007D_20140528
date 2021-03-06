
#ifndef __MT65XX_MEM_INFO_H__
#define __MT65XX_MEM_INFO_H__

struct DRAM_SETTINGS{
  unsigned short  NAND_ID;
  unsigned int BANKS_NR;
  unsigned int CFG_PHYS_SDRAM_0_SIZE;
  unsigned int CFG_PHYS_SDRAM_0_START;
  unsigned int CFG_PHYS_SDRAM_1_SIZE;
  unsigned int CFG_PHYS_SDRAM_1_START;
  unsigned int CFG_PHYS_SDRAM_2_SIZE;
  unsigned int CFG_PHYS_SDRAM_2_START;
  unsigned int CFG_PHYS_SDRAM_3_SIZE;
  unsigned int CFG_PHYS_SDRAM_3_START;
};

struct DRAM_SETTINGS dram_settings[]=
{

	{
		0xADBC,		//NAND_ID
		2,		//DRAM_BANKS_NR
		(SZ_256M - RIL_SIZE),		//CFG_PHYS_SDRAM_0_SIZE
		RIL_SIZE,		//CFG_PHYS_SDRAM_0_START
		(SZ_256M),		//CFG_PHYS_SDRAM_1_SIZE
		(0x10000000),		//CFG_PHYS_SDRAM_1_START
		0x0,		//CFG_PHYS_SDRAM_2_SIZE
		0x0,		//CFG_PHYS_SDRAM_2_START
		0x0,		//CFG_PHYS_SDRAM_3_SIZE
		0x0,		//CFG_PHYS_SDRAM_3_START
	},
	{
		0xECBC,		//NAND_ID
		1,		//DRAM_BANKS_NR
		(SZ_256M - RIL_SIZE),		//CFG_PHYS_SDRAM_0_SIZE
		RIL_SIZE,		//CFG_PHYS_SDRAM_0_START
		(0),		//CFG_PHYS_SDRAM_1_SIZE
		(0),		//CFG_PHYS_SDRAM_1_START
		0x0,		//CFG_PHYS_SDRAM_2_SIZE
		0x0,		//CFG_PHYS_SDRAM_2_START
		0x0,		//CFG_PHYS_SDRAM_3_SIZE
		0x0,		//CFG_PHYS_SDRAM_3_START
	}
};

#endif


