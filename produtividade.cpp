#include<iostream>

using namespace std;

const int MAX_SIZE = 101;
int cel[MAX_SIZE][MAX_SIZE];

int main(){
    int row, col;
    int maxProduction = 0;

    cin >> row >> col;

    for(int rowIndex = 0; rowIndex < row; rowIndex++){
        cel[rowIndex][MAX_SIZE - 1] = 0;
    }

    for(int colIndex = 0; colIndex < col; colIndex++){
        cel[MAX_SIZE - 1][colIndex] = 0;
    }

    for(int rowIndex = 0; rowIndex < row; rowIndex++){
        for(int colIndex = 0; colIndex < col; colIndex++){
            int input;
            cin >> input;
            cel[rowIndex][colIndex] = input;
            cel[rowIndex][MAX_SIZE - 1] = cel[rowIndex][MAX_SIZE - 1] + input;
            cel[MAX_SIZE - 1][colIndex] = cel[MAX_SIZE - 1][colIndex] + input;

            if(cel[MAX_SIZE - 1][colIndex] > maxProduction) maxProduction = cel[MAX_SIZE - 1][colIndex];       
        }

        if(cel[rowIndex][MAX_SIZE - 1] > maxProduction) maxProduction = cel[rowIndex][MAX_SIZE - 1];
    }

    cout << maxProduction << endl;

    return 0;
}