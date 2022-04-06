#include <stdio.h>
#include <string.h>

char p[50];
int i;

int invert(void){
    printf("%c",p[i]);
    i--;
    if(i < 0){
        return 0;
    }
    invert();
}

int main(void){
    printf("digite uma palavra:\n");
    scanf("%s", p);
    i = strlen(p);
    invert();
    return 0;
}