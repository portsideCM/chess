#include "chess.h"

int popCount(const uint64_t& in){
	unsigned int cnt = 0;
	for(int ii = 0; ii < 64; ++ii){
		if(in & (1 << ii))
			cnt++;
	}
	return cnt;
}

std::vector<lmove> getLegalMoves(const bitboard& b, Color c){
	
}
