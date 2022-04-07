#include <stdio.h>

int d,a,b; 

int mdc(){
    if (a%d == 0 && b%d == 0){
        return d;
    }
    d--;
    mdc();
}


int main(void){
    printf("mdc\ninforme a:");
    scanf("%d",&a);
    printf("mdc\ninforme b:");
    scanf("%d",&b);
    if(a == 0){
        d = b;
        printf("o mdc de %d e %d e: %d", a,b,d);
    }
    if(b == 0){
        d = a;
        printf("o mdc de %d e %d e: %d", a,b,d);
    }
    if(a > b) {
        d = b; 
    }
    else{
        d = a;
    }
    mdc();
    printf("o mdc de %d e %d e: %d", a,b,d);
}