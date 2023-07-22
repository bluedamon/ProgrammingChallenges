#include <iostream>

using namespace std;

const int MAX = 100000;
int number[MAX];

int main(){
    int first, last, middle;
    int N, Q;
    scanf("%d %d", &N, &Q);
    for(int i = 0; i < N; i++) scanf("%d", &number[i]);
    for(int i = 0; i < Q; i++){
        int num;
        scanf("%d", &num);    
        first = 0;
        last = N - 1;
        middle = last / 2;
        for(; first < last ; middle = (first + last) / 2){
        if(number[middle] < num) first = middle + 1;
        else if(number[middle] > num) last = middle - 1;
        else last = middle;
    }

    if(number[first] == num) printf("%d \n", first);
    else printf("%d \n", -1);
    }
    
    return 0;
}