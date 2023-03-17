#ifndef CHIP8_H
#define CHIP8_H

#include "config.h"
#include "chip8memory.h"

struct chip8 // All CHIP-8 internals will be stored here
{
	struct chip8_memory memory;
};

#endif
