#include <iostream>

using namespace std;

const int MAX = 4;
const int SIZE = 10;
int numberOfBeatsPerTime[SIZE];
char beatTime[MAX][MAX];

int main(){
    int k;
    bool possible = true;
    cin >> k;

    for(int index = 0; index < SIZE; index++){
        numberOfBeatsPerTime[index] = 0;
    }

    for(int row = 0; row < MAX; row++){
        for(int col = 0; col < MAX; col++){
            cin >> beatTime[row][col];
            if(beatTime[row][col] != '.'){
                int beat = beatTime[row][col] / 49 + beatTime[row][col] % 49;
                numberOfBeatsPerTime[beat] = numberOfBeatsPerTime[beat] + 1;
                if(numberOfBeatsPerTime[beat] > 2 * k) possible = false;
            }
        }
    }

    if(possible) cout << "YES" << endl;
    else cout << "NO"<< endl;

    return 0;
}