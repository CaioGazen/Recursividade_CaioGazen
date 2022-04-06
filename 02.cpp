#include <stdio.h>
int i = 0;
int n1=1, n2 = 0; 
int fibonacci(void){
    int nt;
    i++;
    if(i == 11){
        return 0;
    }
    nt = n2;
    n2 = n1 + n2;
    n1 = nt;
    printf("%d  ", n2);
    fibonacci();
}

int main(void) {
fibonacci();
return 0;
}