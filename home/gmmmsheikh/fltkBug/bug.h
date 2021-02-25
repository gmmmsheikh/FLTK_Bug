#ifndef _BUG_H
#define _BUG_H

using namespace std;

const int NORTH = 0;
const int EAST = 1;
const int SOUTH = 2;
const int WEST = 3;
const int DIRECTIONS = 4

class Bug{
private:
	int position = 0;
   int row;
   int column;
   int direction; // 0 = North, 1 = East, 2 = South, 3 = West

public:
	void move_one_unit();
	void turn_right();
	int get_row() const;
	int get_column() const;
	void rest();
	void up();
};


#endif