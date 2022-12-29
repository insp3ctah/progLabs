#include "11_h.h"
#include <math.h>

float per(struct cord cord1,struct cord cord2, struct cord cord3, struct cord cord4){
    return 2*(abs(cord1.x-cord4.x)+sqrt(pow(abs(cord2.y-cord1.y),2)+pow(abs(cord2.x-cord1.x),2)));
}

float square(struct cord cord1,struct cord cord2, struct cord cord3, struct cord cord4){
    return abs(cord2.y-cord1.y)*abs(cord4.x-cord1.x);
}