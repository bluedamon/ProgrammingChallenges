#include <iostream>

using namespace std;

const long long int MAX_HEIGHT = 1000000;
long long int coin[MAX_HEIGHT];
int pos = 0;
void calculate(long long int search){
    int count = 1, prevCount = 2;
    for(int i = 1; i <= search; i++){
        coin[i] = count;
        count = count + prevCount;
        prevCount = prevCount + 1;
        if(coin[i] > search){
            pos = i - 1;
            break;
        } else{
            if(coin[i] == search){
                pos = i;
                break;
            }
        }
    }
    cout << pos << endl;
}

int main(){
    int T; cin >> T;
    for(int i = 0; i < T; i++){
        long long int N; cin >> N;
        calculate(N);
    }

}