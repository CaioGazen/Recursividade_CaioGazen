#include <stdio.h>

int na, nb;
char a, b;

int fa(void){
    if (na==0){
        return 0;
    }
    na--;
    printf("%c",a);
    fa();
}

int fb(void){
    if (nb==0){
        return 0;
    }
    nb--;
    printf("%c",b);
    fb();
}

int expo(void){
    fa();
    fb();
}

int main(void){
    printf("anbn\n");
    printf("informe a:\n");
    scanf(" %c", &a);
    printf("informe b:\n");
    scanf(" %c", &b);
    printf("quantas repeticoes:\n");
    scanf("%d",&na);
    nb = na;
    expo();
}