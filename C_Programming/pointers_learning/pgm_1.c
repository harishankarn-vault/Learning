#include <stdio.h>
int main()

{
    int *p, nA = 5;
    int* pnA = &nA;
    int** ppnB = &pnA;
	int ***ppnC=&ppnB;

    printf("Values of variables \n");
    printf("p Value of *p = %p \n", *p);
    printf("p Value of *p = %d \n", *p);
    printf("p Value of nA = %p \n", nA);
    printf("d Value of nA = %d \n", nA);
    printf("p Value of A *pnA (from its pointer) = %p \n", *pnA);
    printf("d Value of A *pnA (from its pointer) = %d \n", *pnA);
    printf("d Value of A &ppnB (from its pointer to pointer) = %d \n", &ppnB);
    printf("p Value of A &ppnB (from its pointer to pointer) = %p \n", &ppnB);
    printf("d Value of A **ppnB (from its pointer to pointer) = %d \n", **ppnB);
	printf("d value of A ***ppnC = %d\n",***ppnC);

    printf("Adress of variables \n");
    printf("d Address of A = %d \n",pnA);
    printf("x Address of A = %x \n",pnA);
    printf("p Adress of Pointer to A = %p \n", (void*)pnA);
    printf("p Adress of Pointer Pointer to A = %p \n", (void*)ppnB);
    printf("p Adress of Pointer to A (from is pointer to pointer) = %p \n", (void*)*ppnB);
}
