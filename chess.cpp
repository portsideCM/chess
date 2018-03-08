#include "chess.h"

int popCount(const uint64_t& in){
	unsigned int cnt = 0;
	for(int ii = 0; ii < 64; ++ii){
		if(in & (1 << ii))
			cnt++;
	}
	return cnt;
}

inline bool containsPiece(const bitboard& b, Color colorToCheck, uint8_t location){
	assert(location < 64);
	uint64_t loc = (1 << location);
	
	if(!colorToCheck){
		return (b.whitePawns & loc) | (b.whiteRooks & loc) | (b.whiteKnights & loc) | (b.whiteBishop & loc) | (b.whiteKing & loc) | (b.whiteQueen & loc);
	}
	else {
		return (b.blackPawns & loc) | (b.blackRooks & loc) | (b.blackKnights & loc) | (b.blackBishop & loc) | (b.blackKing & loc) | (b.blackQueen & loc);
	}
}

inline uint8_t addMovetoLocation(uint8_t startingLocation, int yMove, int xMove){
	startingLocation += xMove;
	startingLocation -= yMove * 8;
	return startingLocation;
}

inline Color negate(Color c){
	if(!c){
		return Color::BLACK;
	}
	else {
		return Color::WHITE;
	}
}

std::vector<lmove> getLegalMoves(const bitboard& boardState, Color currentColor){
	std::vector<lmove> moves;
	if(!currentColor) {
		//Color = white
		//Start with getting all pawn moves
		for(uint8_t currentLocation = 0; currentLocation < 64; currentLocation++){
			if(boardState.blackPawns & (1 << currentLocation)){
				//The piece exists at that location
				if(currentLocation < 56 && currentLocation > 47){
					//In the second row so check whether it can do a double move
					if(!containsPiece(boardState, negate(currentColor), addMovetoLocation(currentLocation, 2, 0))){
						moves.push_back();
					}
				}
			}
		}
	}
	else {
		//Color = black
	}
}
