#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 5;
double score[MAX];

int main(){
    for(int i = 0; i < MAX; i++) cin >> score[i];

    for(int index = 0; index < MAX; index++){
        int min = index;
        for(int i = index + 1; i < MAX; i++) if(score[i] <= score[min]) min = i;
        double scoreMin = score[min];
        score[min] = score[index];
        score[index] = scoreMin;
    }

    double result = score[1] + score[2] + score[3]; 
    cout << std::fixed << std::setprecision(1) << result ;

    return 0;
}