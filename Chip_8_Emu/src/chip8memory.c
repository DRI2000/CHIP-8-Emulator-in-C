#include "chip8memory.h"
#include <assert.h>

static void chip8_is_memory_in_bounds(int index)
{

}

void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char val)
{
	memory->memory[index] = val;
}

unsigned char chip8_memory_get(struct chip8_memory* memory, int index)
{
	return memory->memory[index];
}
