#include <stdio.h>

int na, nb;
char a, b;

int fa(void){
    if(na > 0 ){
    na--;
    fa;
    printf("%c",a);
    }
}

int expo(void){

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
    fa();
}