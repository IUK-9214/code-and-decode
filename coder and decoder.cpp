#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    char alpha[27] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
                      'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                      'u', 'v', 'w', 'x', 'y', 'z'};
                      
    int choice;
    cout << "Welcome to the secret translator!" << endl;
    cout << "Choose an option:" << endl;
    cout << "1. Decode (Convert numbers to a sentence)" << endl;
    cout << "2. Encode (Convert a sentence to numbers)" << endl;
    cin >> choice;
    cin.ignore(); // Ignore newline character left in the buffer from the previous input

    if (choice == 1) {
        // Decoding: Numbers to sentence
        string numberSequence;
        cout << "Enter the numbers separated by spaces : ";
        getline(cin, numberSequence);
        
        stringstream ss(numberSequence);
        int num;
        
        cout << "The translated message is: ";
        while (ss >> num) {
            if (num >= 0 && num <= 26) {  // Check for valid range
                cout << alpha[num];
            } else {
                cout << "?"; // For invalid entries
            }
        }
        cout << endl;
    } else if (choice == 2) {
        // Encoding: Sentence to numbers
        string sentence;
        cout << "Enter the sentence you want to encode: ";
        getline(cin, sentence);
        
        cout << "The encoded numbers are: ";
        for (int i = 0; i < sentence.length(); i++) {
            char ch = sentence[i];
            if (ch == ' ') {
                cout << "0 "; // Space is represented by 0
            } else if (ch >= 'a' && ch <= 'z') {
                cout << (ch - 'a' + 1) << " "; // Convert 'a' to 1, 'b' to 2, etc.
            } else if (ch >= 'A' && ch <= 'Z') {
                cout << (ch - 'A' + 1) << " "; // Convert uppercase to the same numbers
            } else {
                cout << "? "; // For any invalid character
            }
        }
        cout << endl;
    } else {
        cout << "Invalid choice! Please restart the program and select 1 or 2." << endl;
    }
    
    return 0;
}

