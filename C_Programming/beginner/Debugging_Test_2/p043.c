#include<stdio.h>

int main() {
	float a=0.7;
	// Condition true as a gets stored as 0.6999 (loss of precision)
	(a<0.7) ?
		printf("Word Longth of 80286 - 32/16 bits"):
			printf("Word Longth of 80286 - 32/32 bits");
	return 0;
}
