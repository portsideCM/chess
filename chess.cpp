#include "chess.h"

static board mainBoard({
	{ -4, -3, -2, -5, -6, -2, -3, -4 },
	{ -1, -1, -1, -1, -1, -1, -1, -1 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 4, 3, 2, 5, 6, 2, 3, 4 }
});

int main(int argc, char** argv) 
{

}

inline bool isWhite(location l) {
	if (!mainBoard.m_board[l.row][l.col])
		return true;
	return (mainBoard.m_board[l.row][l.col] > 0);
}

bool move::isLegal()
{
	int8_t movingPiece = mainBoard.m_board[m_move.first.row][m_move.first.col];
	if (!movingPiece || (isWhite(m_move.first) == m_whiteMove))
		throw new std::invalid_argument("Tried to move an empty piece");
	bool currPieceWhite = isWhite(m_move.first);
	uint8_t movingPieceType = (currPieceWhite)?movingPiece:-movinPiece;
	switch(movingPieceType)
		case PAWN:

		case KNIGHT:

		case BISHOP:

		case ROOK:

		case QUEEN:

		case KING:

	return false;
}
