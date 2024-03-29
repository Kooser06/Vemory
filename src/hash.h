#pragma once
#include <limits.h>
#include <stdint.h>
#include <stddef.h>

enum { MAX_ZOBRIST_LENGTH = 256 };

typedef struct zobrist_s {
  uint64_t hashtab[MAX_ZOBRIST_LENGTH][1 << CHAR_BIT];
} zobrist_t;

void init_zobrist(zobrist_t* k);

uint64_t zobrist(const char* s, size_t length, const zobrist_t* k);
uint64_t zobrist_nt(const char* s, const zobrist_t* k);
