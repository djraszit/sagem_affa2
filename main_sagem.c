/*
 * megane2lcd.c
 *
 *  Created on: 6 sie 2017
 *      Author: root
 */

#include <avr/io.h>
#include <util/delay.h>
#include "I2cbase.h"
#include "sagem_affa2.h"


int main() {

	I2C_Init();

	sagem_affa2_init();

//	sagem_affa2_set_icon(TUNER_LIST | TUNER_PRESET_ON);
//	sagem_affa2_clr_icon(ALL_ICON);
	write_text_sagem("hello raszit wpisz kod albo wychodz z auta i idz pieszo", SCROLL_TEXT);

	while (1) {


	}
}

