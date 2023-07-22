#include <bits/stdc++.h>
using namespace std;
#define FAST_INPUT_OUTPUT ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

void maxSubset();
void maxSubset(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int max = INT_MIN, sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = i; j < n; j++){
            sum = sum + a[j];
            if(sum > max) max = sum;
        }
    }
    cout << max << endl;
}

int main(){
    FAST_INPUT_OUTPUT;
    int t; cin >> t;
    while(t--) maxSubset();

    return 0;
}