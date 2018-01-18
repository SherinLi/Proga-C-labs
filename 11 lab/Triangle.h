#include "point.h"
#ifndef 11_TRIANGLE_H
#define 11_TRIANGLE_H

struct Triangle{
    struct Point P[3];

};

void Consturctor( struct Triangle *T);
double Perimetr( struct Triangle *T);
double Area( struct Triangle *T);

#endif /11_TRIANGLE_H
