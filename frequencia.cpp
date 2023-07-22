#include<iostream>

using namespace std;

const int MAXSTUDENTS = 1000001;
bool students[MAXSTUDENTS];

int main(){

    for(int index = 0; index < MAXSTUDENTS; index++){
        students[index] = false;
    }

    int size;
    int numberOfStudents = 0;

    cin >> size;

    for(int index = 0; index < size; index++){
        int registration;
        cin >> registration;

        if(!students[registration]){
            students[registration] = true;
            numberOfStudents = numberOfStudents + 1;
        }
    }

    cout << numberOfStudents << endl;
    
    return 0;
}