// Gunner Pace, Program 1 - Numbers, take 4 inputs and return information

#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    // Initialize variables
    int n1, n2, n3, n4;
    int max, min;
    float avg;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {

        // Received input
        cout << "\nEnter four unique numbers: ";
        cin >> n1 >> n2 >> n3 >> n4; 
        int numbers[4] = { n1, n2, n3, n4 };

        // Find max
        max = numbers[0];
        for (int i = 1; i < 4; ++i) { 
            if (numbers[i] > max) {
                max = numbers[i];
            }
        }
        cout << "The max is " << max << endl;

        // Find min
        min = numbers[0];
        for (int i = 1; i < 4; ++i) { 
            if (numbers[i] < min) {
                min = numbers[i];
            }
        }
        cout << "The min is " << min << endl;

        // Calculate average
        avg = static_cast<float>(n1 + n2 + n3 + n4) / 4; 
        cout << "The average is " << avg << endl;

        // Sort in ascending order
        sort(numbers, numbers + 4);
        cout << "Ascending order: ";
        for (int i = 0; i < 4; ++i) {
            cout << numbers[i] << " ";
        }
        cout << endl;

        // Sort in descending order
        cout << "Descending order: ";
        for (int i = 3; i >= 0; --i) {
            cout << numbers[i] << " ";
        }
        cout << endl;

        // Ask if the user wants to go again
        cout << "Go again? (y/n): ";
        cin >> choice;
    }

    return 0; 
}
