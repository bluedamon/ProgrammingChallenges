#include <bits/stdc++.h>

using namespace std;

#define ENDL cout << '\n'
#define FAST_INPUT_OUTPUT ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    FAST_INPUT_OUTPUT;

    vector<int> test(10, 0);
    int last = test.size() - 1;
    for(int i = 0; i < test.size(); i++){
        test.at(i) = last--;
    }
    for(int i = 0; i < test.size(); i++) cout << test.at(i) << " ";

    ENDL;

    sort(test.begin(), test.end());
    for(int i = 0; i < test.size(); i++) cout << test.at(i) << " ";

    return 0;
}