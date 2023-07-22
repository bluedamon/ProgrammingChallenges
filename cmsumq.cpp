#include <iostream>

using namespace std;

const int SIZE = 100000;
int list[SIZE];

int main(){
    int N, Q, i, j, sum = 0;
    cin >> N;

    for(int index = 0; index < N; index++){
        cin >> list[index];
    }

    cin >> Q;

    for(int index = 0; index < Q; index++){
        cin >> i >> j;
        sum = list[i];

        for(int ref = i + 1; ref <= j; ref++){
            sum = sum + list[ref];
        }

        cout << sum << endl;
        sum = 0;
    }

    return 0;
}