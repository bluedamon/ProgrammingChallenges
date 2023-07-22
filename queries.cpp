#include <iostream>

using namespace std;

const int MAX = 100001;
int queries[MAX];
string s;

int main(){
    int m, sum = 0;
    cin >> s >> m;

    for(int index = 0; index < s.length(); index++){
        if(s[index] == s[index + 1]){
            sum = sum + 1;
            queries[index + 2] = sum;
        } else{
            queries[index + 2] = sum;
        }        
    }

    for(int index = 0; index < m; index++){
        int l, r;
        cin >> l >> r;

        cout << queries[r] - queries[l] << endl;
    }

    return 0;
}