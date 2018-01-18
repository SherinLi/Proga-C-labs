
#include <stdio.h>
#include"Triangle.h"
#include <stdlib.h>

int main() {

    struct Triangle * T= (struct Triangle *) malloc(sizeof(struct Triangle));
    Consturctor(&T);
    double a = Perimetr(&T);
    printf("This is your pertim: %f \n", a);
    a = Area(&T);
    printf("This is your area: %f ", a);
    free(T);

    return 0;

}
