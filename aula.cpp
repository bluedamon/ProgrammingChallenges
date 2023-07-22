#include <iostream>

using namespace std;

int main(){
    int N;
    int numbers[1000];

    cin >> N;

    for(int index = 0; index < N; index++){
        cin >> numbers[index];
    }

    for(int index = N - 1; index >= 0; index--){
        cout << numbers[index] << endl;
    }

    return 0;
}