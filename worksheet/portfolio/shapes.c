// Name: Yahyaa Umarji
// Student ID: 201957821


#include <stdbool.h>
#include <math.h>
#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    // implementation
    new.x = x;
    new.y = y;
// Makes a point
    return new;
}


Line makeLine(Point p1, Point p2) {
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l; // Makes a line between 2 points
}

Triangle makeTriangle(Point p1, Point p2, Point p3) {
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t; // makes a triangle from 3 points
}

// these are now all the calculations
float lineLength(Line l) {
    float dx = l.p[1].x - l.p[0].x;
    float dy = l.p[1].y - l.p[0].y;
    return sqrt(dx * dx + dy* dy); // calculates distance/the length between 2 points
}

float triangleArea(Triangle t) { // calculates area using the area of triangle formula using all points/co-ordinates
    float x1 = t.p[0].x, y1 = t.p[0].y;
    float x2 = t.p[1].x, y2 = t.p[1].y;
    float x3 = t.p[2].x, y3 = t.p[2].y;
    return fabs((x1*(y2 - y3) + x2 * (y3-y1) + x3 * (y1-y2)) / 2.0); // fabs returns the positive version of the number removing minusses such as when the length of the line is -5.0 for example so -5.0 = 5.0
}

bool samePoint(Point p1, Point p2) { // checks if 2 points are the same
    return(fabs(p1.x - p2.x) < 1.0e-6) && (fabs(p1.y - p2.y) < 1.0e-6);
}

bool pointInLine(Point p, Line l) { // checks to see whether the point is the endpoint of the line
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}

bool pointInTriangle(Point p, Triangle t) { // checks to see whether the point is on any of the triangle's corners
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
