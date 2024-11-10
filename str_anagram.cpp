#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool areAnagrams(const string &str1, const string &str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    vector<int> freq(256, 0);
    for (char ch : str1) {
        freq[ch]++;
    }
    for (char ch : str2) {
        freq[ch]--;
    }
    for (int count : freq) {
        if (count != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin>>str1;
    cout << "Enter second string: ";
    cin>>str2;

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
