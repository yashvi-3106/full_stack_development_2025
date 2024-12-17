/*14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].*/
//1. Brute Force Approach (Fixed-Size Arrays)

#include <iostream>
using namespace std;

void addElementToBeginning(int arr[], int size, int newElement) {
    int updatedSize = size + 1;  // Updated array size
    int updatedArr[updatedSize];  // New array to store updated values

    updatedArr[0] = newElement;  // Add the new element at the beginning

    // Shift all existing elements to the right
    for (int i = 0; i < size; i++) {
        updatedArr[i + 1] = arr[i];
    }

    // Print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < updatedSize; i++) {
        cout << updatedArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[] = {1, 2, 3, 4};  // Original array
    int size = sizeof(nums) / sizeof(nums[0]);  // Calculate size
    int newElement = 0;  // Element to add

    addElementToBeginning(nums, size, newElement);  // Call the function

    return 0;
}

//2. Easy Approach (Fixed-Size Arrays with Manual Shifting)
/*
#include <iostream>
using namespace std;

void addElementToBeginning(int arr[], int& size, int newElement) {
    // Shift elements to the right to make space at the beginning
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element
    arr[0] = newElement;
    // Increment the size
    size++;
    // Print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int nums[10] = {1, 2, 3, 4};  // Array with extra space for shifting
    int size = 4;  // Current number of elements
    int newElement = 0;  // Element to add
    addElementToBeginning(nums, size, newElement);
    return 0;
}
*/
//3. Moderate Approach (Dynamic Arrays using Vectors)
/*
#include <iostream>
#include <vector>
using namespace std;

void addElementToBeginning(vector<int>& nums, int newElement) {
    nums.insert(nums.begin(), newElement);  // Insert the element at the beginning

    // Print the updated vector
    cout << "Updated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};  // Dynamic array
    int newElement = 0;  // Element to add

    addElementToBeginning(nums, newElement);

    return 0;
}
*/
//4. Optimal Approach (Deque)
/*
#include <iostream>
#include <deque>
using namespace std;

void addElementToBeginning(deque<int>& nums, int newElement) {
    nums.push_front(newElement);  // Add the element to the front of the deque

    // Print the updated deque
    cout << "Updated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    deque<int> nums = {1, 2, 3, 4};  // Dynamic double-ended queue
    int newElement = 0;  // Element to add

    addElementToBeginning(nums, newElement);

    return 0;
}
*/
