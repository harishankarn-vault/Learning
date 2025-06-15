#include<stdio.h>

int main() {
	int x=0,y=20;
	(!(!x)&&x)?
		printf("x=%d",x):
		printf("y=%d",y);
	return 0;
}
