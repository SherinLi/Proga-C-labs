#include "Triangle.h"
#include "stdio.h"
#include "math.h"



void Consturctor( struct Triangle *T) {
    int a;
    printf("Now enter three x,y couples of coordinates\n");
    for (int i = 0; i < sizeof(T->P) / 8; i++) {
        scanf("%d", &a);
        T->P[i].x = a;
        scanf("%d", &a);
        T->P[i].y = a;
    }
}
double Perimetr( struct Triangle *T){
    int max = sizeof(T->P)/8;
    double arr[sizeof(T->P)/8] = {0}, perim = 0;

    for (int i = 0; i < max; i++) {
        if (i < max - 1) {
            arr[i] = sqrt(pow(T->P[i + 1].x - T->P[i].x, 2) + pow(T->P[i + 1].y - T->P[i].y, 2));
        } else {
            arr[i] = sqrt(pow(T->P[0].x - T->P[i].x, 2) + pow(T->P[0].y - T->P[i].y, 2));
        }
    }

    for (int i = 0; i < max; i++) {
        perim += arr[i];
    }
    return perim;
}

double Area( struct Triangle *T){

 double a,b,c,d;

    a = Perimetr(T)/2;
    b = sqrt(pow(T->P[1].x - T->P[0].x, 2) + pow(T->P[1].y - T->P[0].y, 2));
    c = sqrt(pow(T->P[2].x - T->P[1].x, 2) + pow(T->P[2].y - T->P[1].y, 2));
    d = sqrt(pow(T->P[0].x - T->P[2].x, 2) + pow(T->P[0].y - T->P[2].y, 2));
  return  sqrt(a *(a-b) * (a-c) * (a-d));

}


