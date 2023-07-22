#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    int years = 0;

    while(a <= b){
        years = years + 1;

        a = 3 * a;
        b = 2 * b;
    }

    printf("%d", years);
    
    return 0;
}