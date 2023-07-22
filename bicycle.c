#include <stdio.h>

void getNextDirection(int predX, int predY, int x, int y, char *nextDirection);
void getNextDirection(int predX, int predY, int x, int y, char *nextDirection){
    if(x != predX){
        if(x - predX > 0){
            *nextDirection = 'A';
        } else {
            *nextDirection = 'C';
        }
    } else {
        if(y - predY > 0){
            *nextDirection = 'B';
        } else {
            *nextDirection = 'D';
        }
    }
}

void countDangerousCurves(char actualDirection, char nextDirection, int *countDangerousCurves);
void countDangerousCurves(char actualDirection, char nextDirection, int *countDangerousCurves){
        if(actualDirection == 'A' && nextDirection == 'B'){
           *countDangerousCurves = *countDangerousCurves + 1;
        } else{
            if(actualDirection == 'B' && nextDirection == 'C'){
                *countDangerousCurves = *countDangerousCurves + 1;
            } else {
                if(actualDirection == 'C' && nextDirection == 'D'){
                    *countDangerousCurves = *countDangerousCurves + 1;
                } else {
                    if(actualDirection == 'D' && nextDirection == 'A'){
                        *countDangerousCurves = *countDangerousCurves + 1;
                    }
                }
            }
        }
}

int main(){
    int n;
    int xo, yo, predX, predY, x, y;
    int dangerousCurves = 0;

    char actualDirection = 'B';
    char nextDirection;

    scanf("%d %d %d %d %d %d %d", &n, &xo, &yo, &predX, &predY, &x, &y);

    while(xo != x || yo != y){
        getNextDirection(predX, predY, x, y, &nextDirection);
        
        countDangerousCurves(actualDirection, nextDirection, &dangerousCurves);

        actualDirection = nextDirection;

        predX = x;
        predY = y;

        scanf("%d %d", &x, &y);
    }

    printf("%d", dangerousCurves);

    return 0;
}