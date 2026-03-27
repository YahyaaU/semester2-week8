
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0,0);
    Point p2 = makePoint(3,4);
    Point p3 = makePoint(0,4);

    Line l = makeLine(p1, p2);
    Triangle t = makeTriangle(p1, p2, p3);

    printf("Line length: %f\n", lineLength(l));

    printf("Triangle area: %f\n", triangleArea(t));

    printf("Same point: %d\n", samePoint(p1, p1));

    printf("Point in line: %d\n", pointInLine(p1, l));

    printf("Point in triangle: %d\n", pointInTriangle(p3, t));


    // test your code by calling the functions and printing the output 
    
    return 0;
}