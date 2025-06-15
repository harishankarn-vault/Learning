#include<stdio.h>

int main() {
	long i=65536+65; printf("%c",i);
	// ASSCI only till 256 so ti wraps around hence = 655101 % 256
	return 0;
}
