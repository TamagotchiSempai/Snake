#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <list>
#include <ncurses.h>


enum Move {
    UP, DOWN, LEFT, RIGHT
};

struct Point {
    int x, y;
    Move m;

    Point() : x(0), y(0), m(RIGHT) {}

    Point(int x_, int y_, Move m_) : x(x_), y(y_), m(m_) {}
};


int main() {
    
    return 0;
}
