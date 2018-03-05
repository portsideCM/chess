#pragma once
#include <thread>
#include <stdio.h>
#include <stdint.h>
#include <vector>

enum Color {
	WHITE = 0,
	BLACK
}

struct bitboard {
	uint64_t whitePawns;
	uint64_t whiteKnights;
	uint64_t whiteBishop;
	uint64_t whiteRooks;
	uint64_t whiteQueen;
	uint64_t whiteKing;

	uint64_t blackPawns;
	uint64_t blackKnights;
	uint64_t blackBishop;
	uint64_t blackRooks;
	uint64_t blackQueen;
	uint64_t blackKing;
};

struct lmove {
	uint16_t value;

	lmove(const uint8_t& to, const uint8_t& from, const uint8_t& flags){
		value = ((flags & 0x3f) << 12) | ((from & 0x3f) << 6) | ((to & 0x3f));
	}
};

