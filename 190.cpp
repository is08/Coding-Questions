#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
