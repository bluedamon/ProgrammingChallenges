#include <bits/stdc++.h>

using namespace std;

#define ENDL '\n'
#define FAST_INPUT_OUTPUT ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void maxMin();
void maxMin(){
    int n; cin >> n;
    vector<int> number(n + 1);
    vector<int> min(n + 1);
    for(int i = 1; i <= n; i++) cin >> number[i];
    sort(number.begin() + 1, number.end()); 
    for(int i = 0; i < n; i++) min[i + 1] = number[i + 1] - number[i];
    sort(min.begin() + 1, min.end());
    cout << min[n] << ENDL;
}

int main(){
    FAST_INPUT_OUTPUT;
    #ifndef JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t; cin >> t;
    for(int i = 0; i < t; i++) maxMin();

    return 0;
}