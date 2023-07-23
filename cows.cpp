#include <bits/stdc++.h>
using namespace std;
#define FAST_INPUT_OUTPUT ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

void maxMinimum(){
    int N, C; cin >> N >> C;
    vector<int> stall(N);
    for(int i = 0; i < N; i++) cin >> stall[i];
    sort(stall.begin(), stall.end());
    int mid, low = 0, high = stall[N - 1], min = 0;
    while(low <= high){
        mid = (low + high + 1)/2;
        int prev = 1, left = 0;
        for(int i = 1; i < N && prev < C; i++) 
            if(stall[i] - stall[left] >= mid){
                left = i;
                prev = prev + 1;
            }
        if(prev >= C){
            min = mid;
            low = mid + 1;
        } else high = mid - 1;
    }
    cout << min << endl;
}
int main(){
    int t; cin >> t;
    while(t--) maxMinimum();
    return 0;
}