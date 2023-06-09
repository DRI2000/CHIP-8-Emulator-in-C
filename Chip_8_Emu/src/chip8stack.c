#include "chip8stack.h"
#include "chip8.h"

static void chip8_stack_in_bounds(struct chip8* chip8)
{
	if(chip8->registers.SP >= CHIP8_TOTAL_STACK_DEPTH) // If index is outside bounds the program terminates
		{
			printf("Stack overflow.\n");
			exit(0);
		}
}

void chip8_stack_push(struct chip8* chip8, unsigned short val)
{
	chip8_stack_in_bounds(chip8);
	chip8->stack.stack[chip8->registers.SP] = val;
	chip8->registers.SP = chip8->registers.SP + 1;
}

unsigned short chip8_stack_pop(struct chip8* chip8)
{
	chip8->registers.SP = chip8->registers.SP - 1;
	unsigned short val = chip8->stack.stack[chip8->registers.SP];
	return val;
}
