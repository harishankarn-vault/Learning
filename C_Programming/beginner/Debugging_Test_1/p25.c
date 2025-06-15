#include<stdio.h>

int main() {
	// int ch; // quick fix
	//char ch; // When using signed char... overflow occurs hence condition never satisfied
	for (ch=65;ch<=255;ch++)
		printf("%d : %c\n",ch,ch);
	return 0;
}
