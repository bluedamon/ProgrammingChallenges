#include <stdio.h>

int main(){
    int A = 0, B = 0;
    int option, N;

    scanf("%d", &N);

    while(N > 0){
        N = N - 1;

        scanf("%d", &option);

        if (option == 1){
            A = !(A == 1);
        } else {
            A = !(A == 1);
            B = !(B == 1);
        }
    }

    printf("%d\n%d", A, B);

return 0;
}