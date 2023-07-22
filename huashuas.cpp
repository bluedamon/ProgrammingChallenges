#include <iostream>

using namespace std;

int main(){
    string word;
    char vocals[50];
    char vocalsInverted[50];
    bool funny = true;

    cin >> word;
    int length = 0;

    int pos = 0;
    for(int index = 0; index < word.length(); index++){
        if(word[index] == 'a' || word[index] == 'e' || word[index] == 'i' || word[index] == 'o' || word[index] == 'u'){
            vocals[pos] = word[index];
            length = length + 1;
            pos = pos + 1;
        }
    }

    pos = 0;
    for(int index = length - 1; index >= 0; index--){
        vocalsInverted[pos] = vocals[index];
        pos = pos + 1;
    }

    for(int index = 0; index < length; index++){
        if(vocalsInverted[index] != vocals[index]) funny = false;
    }

    if(funny) cout << 'S' << endl;
    else cout << 'N' << endl;

    return 0;
}