#pragma once

class vector2 {
private:
    double x;
    double y;
public:
    vector2();
    vector2(double x, double y);

    double getX() const;
    double getY() const;

    void setX(double x);
    void setY(double y);
};