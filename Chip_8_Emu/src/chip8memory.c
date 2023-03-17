#include "chip8memory.h"
#include <assert.h>

static void chip8_is_memory_in_bounds(int index) // Check if memory index is within bounds
{
	if(index >= CHIP8_MEMORY_SIZE) // If index is outside bounds the program terminates
	{
		printf("Memory overflow.\n");
		exit(0);
	}
}

void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char val) // Write operation
{
	chip8_is_memory_in_bounds(index);
	memory->memory[index] = val;
}

unsigned char chip8_memory_get(struct chip8_memory* memory, int index) // Read operation
{
	chip8_is_memory_in_bounds(index);
	return memory->memory[index];
}
