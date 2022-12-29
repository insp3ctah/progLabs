#include <stdio.h>
#include "11_h.h"

int main(){
    struct cord cord1,cord2,cord3,cord4;
    printf("input 4 dots of parallelogram in order 1 to 4");
    scanf("%f%f%f%f%f%f%f%f",&cord1.x,&cord1.y,&cord2.x,&cord2.y,&cord3.x,&cord3.y,&cord4.x,&cord4.y);

    printf("%f\n", per(cord1,cord2,cord3,cord4));
    printf("%f", square(cord1,cord2,cord3,cord3));
}