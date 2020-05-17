/*
 * main.c
 *
 *  Created on: 11 de mai de 2020
 *      Author: gshimabuko
 */
#include <stdio.h>
#include <unistd.h>
#include <io.h>

#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "sys/alt_alarm.h"
#include "sys/alt_timestamp.h"

void simple_control(int);
int main()
{
	alt_u32 elapsed_time;
	alt_u32 speed;
	alt_u32 count;
	alt_u32 cycle;

	int state;
	int timer;
	int decs;
	int units;

	speed = alt_ticks_per_second();
	elapsed_time = 0;
	cycle = 0;
	timer = 0x19;
	state = 0;
	simple_control(state);
	while(1)
	{
		if (elapsed_time < speed/2)
		{
			elapsed_time = alt_nticks() - count;
			IOWR_ALTERA_AVALON_PIO_DATA(LED_BASE, 1);

		}
		else if (elapsed_time >= speed/2 && elapsed_time < speed)
		{
			elapsed_time = alt_nticks() - count;
			IOWR_ALTERA_AVALON_PIO_DATA(LED_BASE, 0);
		}
		else
		{
			count = alt_nticks();
			elapsed_time = 0;
			cycle++;
			timer--;
			decs = timer/0xA;
			units = timer%0xA;
			IOWR_ALTERA_AVALON_PIO_DATA(HEX_1_BASE,decs);
			IOWR_ALTERA_AVALON_PIO_DATA(HEX_0_BASE,units);

		}
		if (cycle == 25)
		{
			state = 1;
			timer = 0x5;
		}
		else if (cycle == 30)
		{
			state = 2;
			timer = 0x2;
		}
		else if (cycle == 32)
		{
			state = 3;
			timer = 0x19;
		}
		else if (cycle == 57)
		{
			state = 4;
			timer = 0x5;
		}
		else if (cycle == 62)
		{
			state = 5;
			timer = 2;
		}
		else if (cycle == 64)
		{
			state = 0;
			timer = 0x19;
			cycle = 0;
		}

		simple_control(state);
	}
	return(0);
}
void simple_control(int state)
{
	switch(state){
	case 0: //GRGR - 25s
		IOWR_ALTERA_AVALON_PIO_DATA(TL_0_BASE,1);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_1_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_2_BASE,1);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_3_BASE,4);

		IOWR_ALTERA_AVALON_PIO_DATA(HEX_5_BASE,156);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_4_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_3_BASE,156);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_2_BASE,127);
		break;

	case 1: //YRYR - 5s
		IOWR_ALTERA_AVALON_PIO_DATA(TL_0_BASE,2);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_1_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_2_BASE,2);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_3_BASE,4);

		IOWR_ALTERA_AVALON_PIO_DATA(HEX_5_BASE,163);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_4_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_3_BASE,163);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_2_BASE,127);
		break;

	case 2: //RRRR - 2s
		IOWR_ALTERA_AVALON_PIO_DATA(TL_0_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_1_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_2_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_3_BASE,4);

		IOWR_ALTERA_AVALON_PIO_DATA(HEX_5_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_4_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_3_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_2_BASE,127);
		break;

	case 3: //RGRG - 25s
		IOWR_ALTERA_AVALON_PIO_DATA(TL_0_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_1_BASE,1);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_2_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_3_BASE,1);

		IOWR_ALTERA_AVALON_PIO_DATA(HEX_5_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_4_BASE,156);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_3_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_2_BASE,156);
		break;

	case 4: //RYRY - 5s
		IOWR_ALTERA_AVALON_PIO_DATA(TL_0_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_1_BASE,2);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_2_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_3_BASE,2);

		IOWR_ALTERA_AVALON_PIO_DATA(HEX_5_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_4_BASE,163);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_3_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_2_BASE,163);
		break;

	case 5: //RRRR -2s
		IOWR_ALTERA_AVALON_PIO_DATA(TL_0_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_1_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_2_BASE,4);
		IOWR_ALTERA_AVALON_PIO_DATA(TL_3_BASE,4);

		IOWR_ALTERA_AVALON_PIO_DATA(HEX_5_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_4_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_3_BASE,127);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_2_BASE,127);
		break;
	}
}
