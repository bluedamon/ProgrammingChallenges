#include <stdio.h>

int main(){
    int n, k;

    scanf("%d %d", &n, &k);

    while(k > 0){
        k = k - 1;

        if(n % 10 == 0){
            n = n / 10;
        } else {
            n = n - 1;
        }
    }

    printf("%d", n);

return 0;
}