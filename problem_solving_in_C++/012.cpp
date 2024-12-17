/*12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array. Output:[1,2,3,4,5,6]*/
#include <iostream>  // Include the header file for input-output operations
#include <vector>    // Include the header file for using vectors
using namespace std; // Use the standard namespace to avoid prefixing 'std::'

// Function to add an element to the end of a vector
void addElementToEnd(vector<int>& arr, int newElement) {
    arr.push_back(newElement); // Add the new element to the end of the vector

    // Print the updated array
    cout << "Updated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Original array as a vector
    
    int newElement = 6;  // Element to be added
    
    // Call the function to add the new element and print the updated array
    addElementToEnd(arr, newElement);
    
    return 0;  // Return 0 to indicate successful execution of the program
}
