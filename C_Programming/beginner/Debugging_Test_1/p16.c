#include<stdio.h>

int main() {
	int i=0,j=1;
if(i || j--)printf("%d %d\n",i++,j);
printf("%d %d",i,j);
	return 0;
}
