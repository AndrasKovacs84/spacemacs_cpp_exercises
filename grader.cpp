#include <iostream>
#include <sstream>

using namespace std;

int main(){

    int score;
    char grade;
    string entry;

    cout << "Please enter score: " << endl;
    // cin >> entry;
    // stringstream(entry) >> score;
    cin >> score;

    cout << "score: " << score << endl;

    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 80 && score < 90){
        grade = 'B';
    } else if (score >= 70 && score < 80){
        grade = 'C';
    } else if (score >= 60 && score < 70){
        grade = 'D';
    } else if (score >= 0 && score < 60){
        grade = 'F';
    } else {
        cout << "Invalid score" << "\n";
        return 0;
    };

    cout << "Your grade is " << grade << "\n";
    return 0;
}
