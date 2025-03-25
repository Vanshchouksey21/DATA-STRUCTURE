#include <iostream>
#include <unordered_set>

using namespace std;

bool isPangram(string s) {
    unordered_set<char> letters;


    for (char c : s) {
        if (isalpha(c)) {  
            letters.insert(tolower(c));
        }
    }

    
    return letters.size() == 26;
}

int main() {
    string s = "The quick brown fox jumps over the lazy dog"; 

    if (isPangram(s)) {
        cout << "It is a pangram." << endl;
    } else {
        cout << "It is not a pangram." << endl;
    }

    return 0;
}
