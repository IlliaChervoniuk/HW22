#include <iostream>
#include "vector2.h"

int main() {
    vector2 v(2, 7);
    std::cout << "X: " << v.getX() << ", Y: " << v.getY() << std::endl;

    v.setX(18);
    v.setY(21);

    std::cout << "Updated, " <<  "X: " << v.getX() << ", Y: " << v.getY() << std::endl;

    return 0;
}