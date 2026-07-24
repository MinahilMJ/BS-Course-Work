/*This C++ code prompts the user to input a sequence of characters (including spaces) 
and then counts the occurrences of each lowercase letter in the input sequence. 
It utilizes an array to store the counts of each lowercase letter, and finally prints 
out the count of occurrences for each lowercase letter present in the input sequence.*/
#include<iostream>
using namespace std;

void countAllCharacters(char text[100]) {
    int counts[26] = {0}; // Array to store counts of each character (assuming only lowercase characters)
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            counts[text[i] - 'a']++; // Increment the count for lowercase characters
        }
    }

    // Printing the occurrences of each character
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << "Occurrence of " << char('a' + i) << " is: " << counts[i] << endl;
        }
    }
}

int main() {
    char text[100];
    cout << "Enter the sequence of characters: ";
    cin.getline(text, 100); // Allowing spaces in input

    countAllCharacters(text);
    return 0;
}
