#include <stdio.h>

int main(){
    int num = -1, max = 0;

    while (num != 0) {
        scanf("%d", &num);

        if(num >= max) max = num;
    }

    printf("%d", max);

return 0;
}