
#include <iostream>
#include <string>
using namespace std;

int firstUniqueLetter(string code) {
    int freq[26] = {0};

    // Step 1: Count each character
    for (char ch : code) {
        freq[ch - 'a']++;
    }

    // Step 2: Find the first unique character
    for (int i = 0; i < code.length(); i++) {
        if (freq[code[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string code = "loveleetcode";

    cout << firstUniqueLetter(code) << endl;

    return 0;
}
