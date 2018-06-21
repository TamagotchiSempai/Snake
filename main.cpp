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

int Field_x0 = 0, Field_y0 = 2, Field_x1 = 40, Field_y1 = 20;
int Food_x, Food_y, score = 0;
std::list<Point> snake;

void moveShake(move m) {
    int x = shake.front().x;
    int y = shake.front().y;
    switch (m) {
        case UP:
            shake.push_front(Point(x, y - 1, m))
                snake.pop_back();
            break;
        case DOWN:
            snake.push_front(Point(x, y + 1, m))
                snake.pop_back();
            break;
        case LEFT:
            snake.push_front(Point(x - 1, y, m))
                snake.pop_back();
            break;
        case RIGHT:
            shake.push_front(Point(x + 1, y, m))
                snake.pop_back();
            break;
    }
}

void addPoint() {
    int x = shake.back().x;
    int y = shake.back().y;
    Move m = shake.back().m;
    switch (m) {
        case UP:
            shake.push_back(Point(x, y + 1, m))
                break;
        case DOWN:
            shake.push_back(Point(x, y - 1, m))
                break;
        case LEFT:
            shake.push_back(Point(x + 1, y, m))
                break;
        case RIGHT
            shake.push_back(Point(x - 1, y, m))
            break;
    }
}



int main() {
    // 
    return 0;
}
