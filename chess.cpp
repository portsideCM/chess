#include "chess.h"

int __uint64_tPopCount(const uint64_t& in){
	unsigned int cnt = 0;
	for(int ii = 0; ii < 64; ++ii){
		if(in & (1 << ii))
			cnt++;
	}
	return cnt;
}
