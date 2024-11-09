#include<iostream>
#include<algorithm>
using namespace std;
void reversestring(string &s){
    reverse(s.begin(),s.end());
}
int main(){
    string str_input;
    cout<<"enter a  string";
    cin>>str_input;
    reversestring(str_input);
    cout<<"reverse string is:"<<str_input<<endl;
    return 0;
}