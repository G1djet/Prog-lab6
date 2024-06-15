#include "shape.h"

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    double tolerance = 0.005;

    std::cout << "Enter the coordinates of the vertices of the trapezoid:" << std::endl;
    std::cout << "x1 y1 x2 y2 x3 y3 x4 y4: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    Shape trapezoid(x1, y1, x2, y2, x3, y3, x4, y4);
    trapezoid.displayParameters();

    int choice;
    do {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Check if the point belongs to the border" << std::endl;
        std::cout << "2. Check if the shape intersects the X axis" << std::endl;
        std::cout << "3. Check if the shape intersects the Y axis" << std::endl;
        std::cout << "4. Determine the type of trapezoid" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        int x, y;
        switch (choice) {
            case 1:
                std::cout << "Enter the coordinates of the point (x y): ";
                std::cin >> x >> y;
                if (trapezoid.isPointOnBoundary(x, y, tolerance)) {std::cout << "Point (" << x << ", " << y << ") it is located on the border of the form." << std::endl;
                } else {
                    std::cout << "Point (" << x << ", " << y << ") it is not located on the border of the form." << std::endl;
                }
                break;
            case 2:
                if (trapezoid.intersectsXAxis()) {
                    std::cout << "The shape intersects the X axis." << std::endl;
                } else {
                    std::cout << "The shape does not intersect the X axis." << std::endl;
                }
                break;
            case 3:
                if (trapezoid.intersectsYAxis()) {
                    std::cout << "The shape intersects the Y axis." << std::endl;
                } else {
                    std::cout << "The shape does not intersect the Y axis." << std::endl;
                }
                break;
            case 4:
                if (trapezoid.isTrapezoidGeneral()) {
                    std::cout << "The shape is a common trapezoid." << std::endl;
                } else if (trapezoid.isTrapezoidIsosceles()) {
                    std::cout << "The shape is an isosceles trapezoid." << std::endl;
                } else if (trapezoid.isTrapezoidRectangular()) {
                    std::cout << "The shape is a rectangular trapezoid." << std::endl;
                }
                break;
            case 0:
                std::cout << "Exit..." << std::endl;
                break;
            default:
                std::cout << "An invalid choice. Try again." << std::endl;
                break;
        }
    } while (choice != 0);

    return 0;
}