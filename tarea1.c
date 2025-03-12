#include <stdio.h>
#include <math.h>

int main() {
    int x = 3;
    float res = ((1/2.0*x)+((3+x)/2.0)*(2*pow(x, 2)))/((2+3)*x);
    printf("%f\n", res);
    return 0;
}
