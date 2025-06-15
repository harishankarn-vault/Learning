#include<stdio.h>

int main() {
    unsigned int ch; 
    for (ch=65;ch<=255;)
        printf("%d : %c\n",ch,ch++);
    return 0;
}
