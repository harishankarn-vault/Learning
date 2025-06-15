#include <stdio.h>

#define MEAN(a,b,c,d,e) ((a + b + c + d + e) / 5)

int main() {
    int a, b, c, d, e, m;
    a = 1; b = 2; c = 3; d = 4; e = 5;
    m = MEAN(a, b, c, d, e);
    printf("Mean of the five numbers is = %d", m);
    return 0;
}

