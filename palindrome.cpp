#include<iostream>
#include<algorithm>
using namespace std;
bool ispalindrome( string &s){
    int start=0,end=s.length()-1;
    while(start<=end){
        if (s[start]!=s[end]){
            return false;

        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string givenstr;
    cout<<"enter a given string";
    cin>>givenstr;
    if(ispalindrome(givenstr)){
        cout<<"string is palindrome";
    }
    else{
        cout<<"string is not palindrome";
    }
}