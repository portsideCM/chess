#pragma once
#include <thread>
#include <stdio.h>
#include <stdint.h>
#include <vector>
#include <stdexcept>

#define BOARD_SIZE 8
#define PAWN 0
#define KNIGHT 1
#define BISHOP 2
#define ROOK 3
#define QUEEN 4
#define KING 5

//1 = pawn, 2 = bishop, 3 = knight, 4 = rook, 5 = queen, 6 = king
//- is black, + is white
//0 is empty
typedef int8_t piece;
typedef std::pair<location, location> movePair;

struct location
{
	size_t row, col;

	inline char getColLetter()
	{
		return 'a' + col;
	}
};

class move
{
public:
	bool m_whiteMove;
	movePair m_move;
	bool isLegal(); //my lord... is that legal?
};


class board
{
public:
	board(board& b) : m_board(b.m_board) {}
	board(std::vector<std::vector<piece>> b) : m_board(b) {}

	std::vector<std::vector<piece>> m_board;
};

