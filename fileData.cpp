
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string fileData;

    // Read the text file
    ifstream file("data.txt");
    getline(file, fileData);
    file.close();

    cout << "Statement: " << fileData << endl;

    // Count vowels
    int vowels = 0;
    for (char c : fileData) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u')
            vowels++;
    }
    cout << "Vowels: " << vowels << endl;

    // Count words
    int words = 1;
    for (char c : fileData) {
        if (c == ' ')
            words++;
    }
    cout << "Words: " << words << endl;

  
    string reversed = fileData;
    reverse(reversed.begin(), reversed.end());
    cout << "Reversed: " << reversed << endl;

   
    for (int i = 1; i < fileData.length(); i++) {
        if (fileData[i - 1] == ' ')
            fileData[i] = toupper(fileData[i]);
    }
    cout << "Second letters capitalized: "
         << fileData << endl;

    return 0;
}
