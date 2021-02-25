#include <iostream>
#include "bug.h"

using namespace std;      

void Bug::move_one_unit()
{   
   if (direction == NORTH) { row--; }
   else if (direction == EAST) { column++; }
   else if (direction == SOUTH) { row++; }
   else if (direction == WEST) { column--; }
}

void Bug::turn_right() 
{
   direction++;
   if (direction == DIRECTIONS) { direction = 0; }
}

int Bug::get_row() const { return row; }
int Bug::get_column() const { return column; }

void Bug::reset(){direction = NORTH;}

void Bug::up(){/*TODO*/}
