#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int pred = 1;
    int suc = 1;
    int fib = 1;

    while(n > 1){
        fib = pred + suc;
        pred = suc;
        suc = fib;    
        n = n - 1;
    }   

    printf("%d", fib);

    return 0;
}