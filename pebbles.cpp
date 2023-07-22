#include <iostream>

using namespace std;

int main(){
    int n, k;
    int minDays = 0;
    int groupsOfKUnits = 0;
    cin >> n >> k;

    for(int index = 0; index < n; index++){
        int input;
        cin >> input;

        if(input < k) groupsOfKUnits = groupsOfKUnits + 1;
        else{
            if(input % k != 0) groupsOfKUnits = groupsOfKUnits + (input / k) + 1;
            else groupsOfKUnits = groupsOfKUnits + input / k;
        }
    }

    if(groupsOfKUnits % 2 != 0) minDays = (groupsOfKUnits / 2) + 1;
    else minDays = groupsOfKUnits / 2;

    cout << minDays << endl;

    return 0;
}