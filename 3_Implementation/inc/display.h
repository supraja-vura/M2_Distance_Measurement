#ifndef __DISPLAY_H_
#define __DISPLAY_H_

#include <avr/io.h>
void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char *string_of_characters);

#endif 