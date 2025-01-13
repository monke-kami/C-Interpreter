#ifndef clox_chunk_h
#define clox_chunk_h

#include "headerstuff.h"

typedef enum {
	OP_RETURN,
} Opcode; //for instructions

typedef struct {
	int count;
	int capacity;
	unit8_t* code;
} Chunk; //for storing other data

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);
#endif
