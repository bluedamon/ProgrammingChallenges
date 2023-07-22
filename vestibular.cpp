#include <iostream>

using namespace std;

int main(){
    int numberOfQuestions, numberOfRightAnswers = 0;
    string testAnswers, studentAnswers;

    cin >> numberOfQuestions >> testAnswers >> studentAnswers;

    for(int index = 0; index < testAnswers.length(); index++){
        if(testAnswers[index] == studentAnswers[index]) numberOfRightAnswers = numberOfRightAnswers + 1;
    }

    cout << numberOfRightAnswers;

    return 0;
}