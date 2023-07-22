#include <iostream>

using namespace std;

const int MAX = 11;
int square[MAX][MAX];

int main(){
    int N, diagonal = 0, secondaryDiagonal = 0;
    bool magicSquare = true;

    cin >> N;

    for(int index = 0; index < N; index++){
        square[index][MAX - 1] = 0;
        square[MAX - 1][index] = 0;
    }

    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            int input;
            cin >> input;
            square[row][MAX - 1] = square[row][MAX - 1] + input;
            square[MAX - 1][col] = square[MAX - 1][col] + input;

            if(col == row) diagonal = diagonal + input;
            if(col + row == N - 1) secondaryDiagonal = secondaryDiagonal + input;
        }
    }

    if(diagonal == secondaryDiagonal){
        for(int index = 0; index < N; index++){
            if(square[index][MAX - 1] != diagonal || square[MAX - 1][index] != diagonal) magicSquare = false;
        }
    } else{
        magicSquare = false;
    }

    if(magicSquare) cout << diagonal << endl;
    else cout << -1 << endl;

    return 0;
}