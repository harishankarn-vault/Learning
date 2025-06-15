#include<stdio.h>

int main() {
	int i=5;
int	j=4;
	i=i^j;
	j=j^i;
	i=i^j;
	printf("%d %d",i,j);
	return 0;
}
