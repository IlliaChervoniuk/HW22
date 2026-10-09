#include "vector2.h"

vector2::vector2() : x(0.0), y(0.0) {};
vector2::vector2(double x, double y) : x(x), y(y) {};

double vector2::getX() const {
    return x;
}

double vector2::getY() const {
    return y;
}

void vector2::setX(double x) {
    this->x = x;
}

void vector2::setY(double y) {
    this->y = y;
}
