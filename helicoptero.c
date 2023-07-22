#include <stdio.h>

int getAway(int H, int P, int F, int D);
int getAway(int H, int P, int F, int D){
    int pos = F;
    int success;
    
    if(F > H){
        success = !(D == 1);

        while(pos > H){
            pos = pos - 1;

            if(pos == P) success = (D == 1);
        }
    } else{
        success = (D == 1);
            
        while(pos < H){
            pos = pos + 1;

            if(pos == P) success = !(D == 1);
        }
    }

    return success;
}

int main(){
    int H, P, F, D;
    int success;

    scanf("%d %d %d %d", &H, &P, &F, &D);

    if(getAway(H, P, F, D)) printf("S");
    else printf("N");

    return 0;
}