#include <iostream>
#include <cmath>

class Shape {
private:
    int x1, y1, x2, y2, x3, y3, x4, y4;

public:
    Shape(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
    void displayParameters();
    bool isPointOnBoundary(int x, int y, double tolerance);
    bool intersectsXAxis();
    bool intersectsYAxis();
    bool isTrapezoidGeneral();
    bool isTrapezoidIsosceles();
    bool isTrapezoidRectangular();
};