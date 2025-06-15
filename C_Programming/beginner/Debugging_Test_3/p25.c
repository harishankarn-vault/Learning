#include<stdio.h>

#define IT 0.1
#define HRA 0.2
#define DA 0.3

int main() {
    float bas_sal, net_sal;
    bas_sal = 1000;
    net_sal = bas_sal * (1 + HRA + DA - IT);  // Corrected formula
    printf("x=%f", net_sal);  // Printing the net salary as a floating point
    return 0;
}

