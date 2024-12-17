/*5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.*/
#include <iostream>  // Include the header file for input-output operations
using namespace std;  // Use the standard namespace to avoid prefixing 'std::' before every standard function

// Function to check if a person is eligible to vote
void checkEligibilityToVote(int age) {
    // Check if the person is 18 years old or older
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;  // If the person is 18 or older, they are eligible to vote
    } else {
        cout << "You are not eligible to vote." << endl;  // If the person is younger than 18, they are not eligible to vote
    }
}

int main() {
    int age;
    cout << "Enter your age: ";  // Prompt the user to enter their age
    cin >> age;  // Read the age input from the user
    checkEligibilityToVote(age);  // Call the function to check if the person is eligible to vote
    return 0;  // Return 0 to indicate successful execution of the program
}
