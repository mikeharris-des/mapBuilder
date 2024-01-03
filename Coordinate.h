#pragma once
#include "defs.h"

enum Direction { EAST, NORTH, WEST, SOUTH, DIRECTION_COUNT };

class Coordinate {

    friend ostream& operator<<(ostream& os, const Coordinate& coord);

    private:
        int xCoord, yCoord;   // member attributes
    public:
        Coordinate(int x=-1, int y=-1);
        int x() const {return this->xCoord;} // getter for x
        int y() const {return this->yCoord;} // getter for y

        void set(int x, int y); // setter for this location x/y
        void setInDirection(int tempX, int tempY, Direction dir);
        void setInDirection(const Coordinate& coord, Direction dir);
        void setInDirection(const Coordinate& coord, Direction dir, int jump);
        string directionToString(Direction dir);
        void print() const; // print meta data

        bool operator==(const Coordinate& coord) const;

        bool compareY(const Coordinate& coord) const;
        bool compareX(const Coordinate& coord) const;
};
