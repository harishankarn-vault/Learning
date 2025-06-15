#include<stdio.h>

int main() {
	int i=10,j=20; i^=j; j^=i;i^= j;
	// ^ is XOR which operates on bits
 printf("%d..%d",i,j); 
	return 0;
}
