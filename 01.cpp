#include <stdio.h>

int p = 1;
int potencia(int x, int y){
    if (y == 0){
        return p;
    }
    p = p * x;
    y--;
    potencia(x,y);
}

int main(void){
    int x, y;
    printf("x^y");
    printf("\ninforme x\n");
    scanf(" %d", &x);
    printf("\ninforme y\n");
    scanf(" %d", &y);
    printf("x^y = %d", potencia(x, y));
    return 0;
}