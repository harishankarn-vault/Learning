#include<stdio.h>

int main() {
 int i=11;if(++i==6) printf("Six");
else if(i++==11)printf("eleven");
else if(i--==10)printf("ten");
 else if(--i==11)printf( "eleven");
	return 0;
}
