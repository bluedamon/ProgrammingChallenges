#include <iostream>

using namespace std;

const int MAX = 1001;
int table[MAX][MAX];

int main(){
    int N;
    int globalMax = 0; 
    
    cin >> N;

    for(int index = 0; index < N; index++){
        table[index][MAX - 1] = 0;
        table[MAX - 1][index] = 0;
    }

    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            int input;
            cin >> input;

            table[row][col] = input;
            table[row][MAX - 1] = table[row][MAX - 1] + input;
            table[MAX - 1][col] = table[MAX - 1][col] + input;
        }
    }

    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            int sum = table[row][MAX - 1] + table[MAX - 1][col] - 2 * table[row][col];

            if(sum > globalMax) globalMax = sum;
        }
    }

    cout << globalMax;

    return 0;
}