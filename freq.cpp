#include<iostream>

using namespace std;

int main(){
    int students[100000];
    int studentsPresent[100000];
    int size;
    cin >> size;

    for(int index = 0; index < size; index++){
        cin >> students[index];
    }

    int numberOfStudents = 1;
    studentsPresent[0] = students[0];

    for(int index = 1; index < size; index ++){
        bool repeated = false;
        for(int i = 0; i < numberOfStudents; i++){
            if(students[index] == studentsPresent[i]){
                repeated = true;
                break;
            }
        }

        if(!repeated){
            studentsPresent[numberOfStudents] = students[index];
            numberOfStudents = numberOfStudents + 1;
        }
    }  

    cout << numberOfStudents << endl;

    return 0;
}