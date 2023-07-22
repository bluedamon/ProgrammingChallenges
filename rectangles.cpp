#include <iostream>
 
using namespace std;
 
const int MAX = 52;
int table[MAX][MAX];
unsigned long long int sets = 0;

long long int pow(int y);
long long int pow(int y){
    unsigned long long int pow = 1;
    for(int i = 1; i <= y; i++) pow = 2 * pow;
    return pow;
}
 
int main(){
    int n, m;
    cin >> n >> m;
 
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            table[i][j] = 0;
        }
    }
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> table[i][j];
 
            if(table[i][j] == 1){
                table[i][MAX - 1] = table[i][MAX - 1] + 1;
                table[MAX - 1][j] = table[MAX - 1][j] + 1;
            } else{
                table[i][MAX - 2] = table[i][MAX - 2] + 1;
                table[MAX - 2][j] = table[MAX - 2][j] + 1; 
            } 
 
            if(i == n - 1){
                sets = sets + (pow(table[MAX - 1][j]) + pow(table[MAX - 2][j]) - 2);
            }
        }
        sets = sets + (pow(table[i][MAX - 1]) + pow(table[i][MAX - 2]) - 2);
    }
 
    cout << sets - m * n;

    return 0;
}
