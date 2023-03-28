#include "chip8keyboard.h"
#include <assert.h>

static void chip8_keyboard_check_bounds(int key)
{
	assert(key >= 0 && key < CHIP8_TOTAL_KEYS);
}

// Map array contains HEX keyboard keys; key contains the actual key pressed down
// The for loop look through the map array, checking whether the key pressed down has an equivalent in the map array
int chip8_keyboard_map(const char* map, char key)
{
	for (int i = 0; i < CHIP8_TOTAL_KEYS; i++)
	{
		if (map[i] == key)
		{
			return i;
		}
	}
	return -1;
}

void chip8_keyboard_down(struct chip8_keyboard* keyboard, int vkey)
{
	keyboard->keyboard[vkey] = true;
}

void chip8_keyboard_up(struct chip8_keyboard* keyboard, int vkey)
{
	keyboard->keyboard[vkey] = false;
}

bool chip8_keyboard_is_down(struct chip8_keyboard* keyboard, int vkey)
{
	return keyboard->keyboard[vkey];
}
