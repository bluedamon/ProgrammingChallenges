#include <iostream>

using namespace std;

const int MAX = 10000;
int number[MAX];

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) cin >> number[i];

    for(int index = 0; index < N; index++){
        int min = index;
        for(int i = index + 1; i < N; i++) if(number[i] <= number[min]) min = i;
        int minValue = number[min];
        number[min] = number[index];
        number[index] = minValue;
        cout << number[index] << " ";
    }

    return 0;
}