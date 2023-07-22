#include <iostream>

using namespace std;

const int MIN_ROWS = 30;
const int MAX_ROWS = 61;
const int MAX_COLS = 2;
const char LEFT = 'E';
int pairs[MAX_ROWS][MAX_COLS];

int main(){
    int N, numberOfPairs = 0;
    cin >> N;

    for(int row = MIN_ROWS; row < MAX_ROWS;  row++){
        for(int col = 0; col < MAX_COLS; col++){
            pairs[row][col] = 0;
        }
    }

    for(int index = 0; index < N; index++){
        int size;
        char side;
        cin >> size >> side;

        if(side == LEFT) pairs[size][0] = pairs[size][0] + 1;
        else pairs[size][1] = pairs[size][1] + 1;

        int min = pairs[size][0];
        if(pairs[size][1] < pairs[size][0]) min = pairs[size][1];

        numberOfPairs = numberOfPairs + min;
        pairs[size][0] = pairs[size][0] - min;
        pairs[size][1] = pairs[size][1] - min;
    }

    cout << numberOfPairs << endl;

    return 0;
}