/* 
   use asserts within a trivial program
   by gitLemon
   2 November 2025
*/

#include <assert.h>
#include <stdio.h>

int main() {
    double x, y;
    while (1) {
        printf("Read in 2 floats:\n");
        scanf("%lf %lf", &x, &y);
        assert(y != 0); // ensure denominator is not zero
        printf("when divided x/y = %lf\n", x / y);
    }
    return 0;
}
