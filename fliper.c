#include <stdio.h>

int main() {
    int P, R;
    char result;

    scanf("%d %d", &P, &R);

    if(P == 0) result = 'C';
    else {
        if(R == 0) result = 'B';
         else {
            if(R == 1) result = 'A';
        }
    }

    printf("%c", result);

    return 0;
}