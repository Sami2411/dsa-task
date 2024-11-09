#include<iostream>
#include<unordered_map>
using namespace std;

char nonrepeatingchar(string &s) {
    unordered_map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }
    for (char c : s) {
        if (charCount[c] == 1) {
            return c;
        }
    }
    return '$'; 
}

int main() {
    string s = "leela";
    cout << nonrepeatingchar(s); 
    return 0;
}
