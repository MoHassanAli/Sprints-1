/**
 * @file main.c
 * @author Elgharib
 * @brief Display the keypad Pressed on Lcd
 * @version 0.1
 * @date 2021-07-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "KeyPad_int.h"
#include "LCD_Interface.h"

int main(void)
{
	KEYPAD_voidInit();
	LCD_voidInit();

uint8_t Key;
LCD_voidGoto(0, 0);
    while (1)
    {
    	Key = KEYPAD_u8Read();
    	if(Key != DEFAULT_KEY)
    	{
    		LCD_voidWriteChar(Key);
    	}
    }
}
