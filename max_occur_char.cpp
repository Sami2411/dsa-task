#include <iostream>
#include <string>
#include <map>
using namespace std;

char maxOccurringCharacter(const string &str) {
    map<char, int> freq;
    for (char ch : str) {
        freq[ch]++;
    }
    char maxChar = '\0';
    int maxFreq = 0;
    for (const auto &entry : freq) {
        if (entry.second > maxFreq) {
            maxFreq = entry.second;
            maxChar = entry.first;
        }
    }

    return maxChar;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin>>str;
    
    char result = maxOccurringCharacter(str);
    cout << "The maximum occurring character is: " << result << endl;
    
    return 0;
}
