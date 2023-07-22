#include <iostream>

using namespace std;

const int MAX = 10;
int number[MAX];

int main(){
    int size;
    int search;
    cin >> size >> search;
    for(int i = 0; i < size; i++) cin >> number[i];

    int first = 0;
    int last = size - 1;
    int middle = last / 2;
    for(; last - first > 0 ; middle = (first + last) / 2){
        if(number[middle] < search) first = middle + 1;
        else last = middle - 1;        
    }

    if(number[middle] == search) cout << "NUMERO ENCONTRADO NA POS: " << middle;
    else cout << "NUMERO NAO ESTA NA LISTA";
    
    return 0;
}