#include <iostream>

using namespace std;

const int MAX = 50;
int card[MAX];

int main(){
    int max, min, pos = 0;
    cin >> max;

    for(int i = 0; i < max; i++) cin >> card[i];

    for(int index = 0; index < max; index++){
        min = index;
        for(int i = index + 1; i < max; i++) if(card[i] <= card[min]) min = i;
        int cardMin = card[min];
        card[min] = card[index];
        card[index] = cardMin;
        cout << card[index] << " ";
    }

    return 0;
}