/* Write a function to check the grade of a student based on the score:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F
*/
#include<iostream>
#include<string>
using namespace std;

string checkGrade(int score) {
    // Function to determine the grade based on the score
    if (score >= 90 && score <= 100) {
        return "A";
    } else if (score >= 80 && score < 90) {
        return "B";
    } else if (score >= 70 && score < 80) {
        return "C";
    } else if (score >= 60 && score < 70) {
        return "D";
    } else if (score < 60 && score >= 0) {
        return "F";
    } else {
        return "Invalid score"; // Handle invalid input
    }
}
int main(){

    int score;
    // Input from the user
    cout << "Enter the student's score (0-100): ";
    cin >> score;

    // Call the function and display the grade
    string grade = checkGrade(score);
    cout << "The student's grade is: " << grade << std::endl;

    return 0;
}
