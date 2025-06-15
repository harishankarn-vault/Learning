#include<stdio.h>

int main() {
	int c=5,d=5,e=10,a;
   	a=c>1?d>11 ||e>1?100:200:300;
	printf("a=%d",a);
	return 0;
}
