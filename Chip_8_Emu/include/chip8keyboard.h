#ifndef INCLUDE_CHIP8KEYBOARD_H_
#define INCLUDE_CHIP8KEYBOARD_H_

#include <stdbool.h>
#include "config.h"

struct chip8_keyboard
{
	bool keyboard[CHIP8_TOTAL_KEYS];
};

int chip8_keyboard_map(const char* map, char key); // Keyboards equivalence checking
void chip8_keyboard_down(struct chip8_keyboard* keyboard, int vkey); // Assign down state
void chip8_keyboard_up(struct chip8_keyboard* keyboard, int vkey); // Assign up state
bool chip8_keyboard_is_down(struct chip8_keyboard* keyboard, int vkey); // Return key state

#endif
